#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#include <stdlib.h>
/**
 * stuct - structure for elf
 * @e_ident[16]: identifiation
 * @e_type: machine type
 * @e_machine: machine
 * @e_version" version
 * @e_entry: entry
 * @e_phoff: phoff
 * @e_shoff: shoff
 * @e_flags: flags
 * @e_ehsize: ehsize
 * @e_phentsize; phentsize
 * @e_phnum;
 * @e_shentsize;
 * @e_shnum;
 * @e_shstrndx;
 * Description: Data structure for elf
 */
typedef struct elf
{
	unsigned char e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64;


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
