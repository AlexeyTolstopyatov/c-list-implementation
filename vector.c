/*
 * Реализация поведения коллекции
 */
#include "vector.h"

/*
 * Реализует новый вектор
 * Заполняет данные нулями
 */
struct vector* vnew() {
	struct vector* vec = (struct vector*)malloc(sizeof(struct vector));
	if (vec == __VEC_NULL) {
		exit(__VEC_NULL);
	}
	vec->data = __VEC_NULL;
	vec->capacity = __VEC_NULL;
	vec->size =	__VEC_NULL;

	return vec;
}

/*
 * Освобождает память от вектора
 */
void vdel(struct vector* vec) {
	free(vec->data);
	free(vec);
}

/*
 * Добавляет элемент в конец списка
 */
int vadd(struct vector *vec, int element) {
	if (vec->size == vec->capacity) {
		vec->capacity *= 2;
		vec->data = realloc(vec->data, vec->capacity * sizeof(int));
		if (vec->data == __VEC_NULL)
			return __VEC_NULL; /*allocation error*/

	}
	vec->data[vec->size++] = element;
	vec->size++;

	return vec->size - 1;
}

void vprint(struct vector* vec) {
	for (int i = 0; i < vec->size -1; i++)
		printf("%d ", vec->data[i]);
	printf("\n");
}

