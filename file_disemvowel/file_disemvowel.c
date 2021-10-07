#include <stdio.h>
#include <stdbool.h>

#define BUF_SIZE 1024

bool is_vowel(char c){
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
      c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int copy_non_vowels(int num_chars, char* in_buf, char* out_buf){
  /* Copy all the non-vowels from in_buf to out_buf.
   * num_chars indicates how many characters are in in_buf,
   * and this function should return the number of non-vowels that
   * were copied over.
   */

  int consonant_count = 0;
  for (int i = 0; i < num_chars; i++){
    char current_char = in_buf[i];
    if(!is_vowel(current_char)){
      out_buf[consonant_count++] = current_char;
    }
  }

  // We know how big the output has to be now,
  // so we can shrink it.
  realloc(out_buf, consonant_count * sizeof(char));
  return consonant_count;

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
