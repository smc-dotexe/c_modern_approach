#ifndef LINE_H
#define LINE_h

// clear_line: clears the current line
void clear_line();

// add_word: adds word to the end of the current line.
// if this is not the first word on the line,
// puts one space before word.
void add_word(const char *word);

// space_remaining: returns the number of characters left
// in the current line
int space_remaining();

// write_line: writes the current line with justification
void write_line();

// flush_line: writes the current line without justification.
// if the line is empty, does nothing.
void flush_line();

#endif
