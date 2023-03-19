// Description
// ["Hello", "World", "."]

// Create a function that displays the content of an array of strings.
// One word per line.

// Each word will be followed by a newline, including the last one.

// (You can't use printf, time to reuse your my_putstr function ;-))
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

void putstr(char* str){
    char* temp=str;
    while(*temp!='\0'){
        putchar(*temp);
        temp++;
    }
}
void my_print_words_array(string_array* str_array)
{
   for(int i=0;i< str_array->size;i++){
    putstr(str_array->array[i]);
    putchar('\n');
   }
}