#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include "main.h"

/**
 * print_error - prints error
 * @message: the error message
 *
 * Return: void
 */

void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * main- function to print elf
 * @argc: counts numbers of argument
 * @argv: an array of variable
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	const char *filename = argv[1];
	Elf64 header;
	int i, fd;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error("Failed to open file");
	}

	if (read(fd, &header, sizeof(Elf64)) != sizeof(Elf64))
	{
		print_error("Failed to read ELF header");
	}
	if (header.e_ident[0] != 0x7F || header.e_ident[1] != 'E')
	{
		if (header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
		{
			print_error("Not an ELF file");
		}
	}
	printf("Magic: ");
	
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("Class: %d-bit\n", header.e_ident[4] == 1 ? 32 : 64);
	printf("Data: %s\n", header.e_ident[5] == 1 ? "Little Endian" : "Big Endian");
	printf("Version: %d\n", header.e_ident[6]);
	printf("OS/ABI: %d\n", header.e_ident[7]);
	printf("ABI Version: %d\n", header.e_ident[8]);
	printf("Type: %u\n", header.e_type);
	printf("Entry point address: 0x%lx\n", header.e_entry);
	close(fd);
	return (0);
}
