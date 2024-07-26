#include <stdio.h>
#include <stdlib.h>
#define __VEC_NULL 0

struct vector {
	int* data;		
	size_t capacity;/*Емкость*/
	size_t size;	  /*Размер*/
};

struct vector* vnew();
void vdel(struct vector* vec);
int	 vadd(struct vector* vec, int element);
void vprint(struct vector* vec);


