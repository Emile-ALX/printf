#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * convert - convert integer to string
 * @num: int to convert
 * @base: conversion base
 * @lowercase: convert to lowercase or upper
 * Return: pointer to string
 */

char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
			  ? "0123456789abcdef"
			  : "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do
	{
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
