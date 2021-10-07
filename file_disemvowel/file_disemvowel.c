#include <stdio.h>
#include <stdbool.h>

#define BUF_SIZE 1024

bool is_vowel(char c){

}

int copy_non_vowels(int num_chars, char* in_buf, char* out_buf){
  /* Copy all the non-vowels from in_buf to out_buf.
   * num_chars indicates how many characters are in in_buf,
   * and this function should return the number of non-vowels that
   * were copied over.
   */
}

void disemvowel(FILE* input_file, FILE* output_file) {
  /* Copy all the non-vowels from input_file to output_file.
   * Create input and output buffers, and use fread() to repeatedly
   * read in a buffer of data, copy the non-vowels to the output
   * buffer, and use fwrite to write that out.
   */
}

int main(int argc, char* argv[]) {
  //Input and output are set to stdin and stdout by default.
  
  FILE* input_file = stdin;
  FILE* output_file = stdout;

  disemvowel(input_file, output_file);

  return 0; //Signifies succssful completion
}
