#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char** argv) {
  char* KEY_NAMES[] = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};
  const int SIZE_OF_KEY_ARRAY = 12;
  const int SIZE_OF_SCALE = 6;
  int MAJOR_SCALE[] = {2,2,1,2,2,2};
  int MINOR_SCALE[] = {2,1,2,2,1,2};
  char* startingNote = argv[1];
  int startingIndex;
  int currentNoteIndex;
  if(strcmp(startingNote, "A") == 0) {
    startingIndex = 0;
  } else if (strcmp(startingNote, "A#") == 0) {
    startingIndex = 1;
  } else if (strcmp(startingNote, "B") == 0) {
    startingIndex = 2;
  } else if (strcmp(startingNote, "C") == 0) {
    startingIndex = 3;
  } else if (strcmp(startingNote, "C#") == 0) {
    startingIndex = 4;
  } else if (strcmp(startingNote, "D") == 0) {
    startingIndex = 5;
  } else if (strcmp(startingNote, "D#") == 0) {
    startingIndex = 6;
  } else if (strcmp(startingNote, "E") == 0) {
    startingIndex = 7;
  } else if (strcmp(startingNote, "F") == 0) {
    startingIndex = 8;
  } else if (strcmp(startingNote, "F#") == 0) {
    startingIndex = 9;
  } else if (strcmp(startingNote, "G") == 0) {
    startingIndex = 10;
  } else if (strcmp(startingNote, "G#") == 0) {
    startingIndex = 11;
  }
  currentNoteIndex = startingIndex;
  printf("Major scale: ");
  printf("%4s", KEY_NAMES[startingIndex]);
  for(int count = 0; count < SIZE_OF_SCALE; count = count + 1 ) {
    if( currentNoteIndex == SIZE_OF_KEY_ARRAY-1 && MAJOR_SCALE[count] == 1 ) {
      currentNoteIndex = 0;
    } else if (currentNoteIndex == SIZE_OF_KEY_ARRAY-1 && MAJOR_SCALE[count] == 2 ) {
      currentNoteIndex = 1;
    } else if (currentNoteIndex == SIZE_OF_KEY_ARRAY-2 && MAJOR_SCALE[count] == 2 ) {
      currentNoteIndex = 1;
    } else {
      currentNoteIndex += MAJOR_SCALE[count];
    }
    printf("%4s",KEY_NAMES[currentNoteIndex]);
  }
  printf("\n");
  //MINOR SCALE
  currentNoteIndex = startingIndex;
  printf("Minor scale: ");
  printf("%4s", KEY_NAMES[startingIndex]);
  for(int count = 0; count < SIZE_OF_SCALE; count = count + 1 ) {
    if( currentNoteIndex == SIZE_OF_KEY_ARRAY-1 && MINOR_SCALE[count] == 1 ) {
      currentNoteIndex = 0;
    } else if (currentNoteIndex == SIZE_OF_KEY_ARRAY-1 && MINOR_SCALE[count] == 2 ) {
      currentNoteIndex = 1;
    } else if (currentNoteIndex == SIZE_OF_KEY_ARRAY-2 && MINOR_SCALE[count] == 2 ) {
      currentNoteIndex = 1;
    } else {
      currentNoteIndex += MINOR_SCALE[count];
    }
    printf("%4s",KEY_NAMES[currentNoteIndex]);
  }
  printf("\n");

}
