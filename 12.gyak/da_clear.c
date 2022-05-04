
typedef struct{
    int length;

}

void da_clear(Dynarray *self)
{
    free(self->elems);
    self->elems = malloc(sizeof(Dynarray)
}