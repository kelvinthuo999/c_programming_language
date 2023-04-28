					HOUR 1
<pre>
-> C is a high-level programming language.
-> C is portable, readable, and easily maintained.
-> American National Standards Instute(ANSI) built the standard library.
-> Programs in C must be compiled before they can be used.
</pre>
					HOUR 2
<pre>
-> Source code for C programs must have a .c extension.
-> /*....*/ are used to indicate comments in C.
-> Comments help document specific sections or functions do in the program.
-> ANSI does not support nested comments.
-> In C, #include forms a preprocessor directive that tells the C preprocessor to look for a file and place the contents of that file in the location where the #include directive indicates.
-> Header files are placed at the start of the file.
-> The angle <> brackets ask the C preprocessor to look for a header file in a directory other than the current one.
-> The "" double quotes tell the preprocessor to look in the current directory for the file requested.
-> Every C program must have main() function and it can only be one.
-> exit() function can also be used to end a program but does not return a value to your program.
-> Program errors are also called bugs.
</pre>
					HOUR 3
<pre>
-> A constant is a value that never changes.
-> A variable can be used to represent different values.
-> An expression is a combination of constants, variables, and operators that are used to
denote computations.
-> % is used to obtain the remainder of the first operand divided by the second
operand. Also called the modulus operator.
-> A statement is a complete instruction, ending with a semicolon.
-> A function name should reflect what it can do.
-> Arguments are pieces of information passed to a function.
</pre>
					HOUR 4
<pre>
-> ASCII stands for American Standard Code for Information Interchange.
-> A char takes up 1 byte of storage.
-> char variablename;
-> %c is the character format specifier.
-> Character constant is enclosed in single quotes.
-> A string of more than one character uses double quotes.
-> int keyword is used to specify the type of a variable as an integer.
-> int variablename;
-> %d is an integer format specifier.
-> A floating-point number has a decimal point.
-> float variablename;
-> %f is the floating-point specifier.
-> A double uses twice the storage for a float.
-> Floating-point numbers can be suffixed with f or F to specify float. A floatingpoint number without a suffix is double by default.
-> %c is used for character set only.
</pre>
					HOUR 5
<pre>
-> C language treats a file as a series of bytes(stream).
-> stdin — The standard input for reading.
-> stdout—The standard output for writing.
-> stderr—The standard error for writing error messages.
-> The above three files are pre-opened and always available to use.
-> Hex is a compromise between the computer-readable
base-2 (or binary) number system, and our more familiar base-10 (or decimal) system.
-> %x or %X are the unsigned hexadecimal format specifiers.
-> A hexadecimal number is represented by 4 bits.
-> Minimum field width specifier specifies the minimum field width and ensures that the output reaches the minimum width.
-> A positive integer between the % and the specifier aligns the output to the right.
-> A negative integer between the % and the specifier aligns the output to the left.
-> The C library functions getc() and getchar() can be used to read in one character
from the standard input.
-> The C library functions putc() and putchar() can be used to write one character
to the standard output.
</pre>
					HOUR 6
<pre>
-> The assignment operator = assigns whatever value is held on the right to the variable on the left.
-> Arithmetic assignment operator is a combination of the assignment operators with arithmetic operators(+=, -=, /=, %=).
-> ++x represents pre-increment, whereas x++ represents post-increment.
-> --x represents pre-decrement, whereas x-- represents post-decrement.
-> Pre refers to first evaluate then assign, while Post means assign then evaluate.
-> Relational operators evaluate to either 1 when the evaluation is true, and 0 when the evaluation is false.
-> Arithmetic operators have precedence over relational operators.
-> Cast operator changes the data type of a variable, expression, or constant.
</pre>
					HOUR 7
<pre>
-> Looping can be used to perform the same set of statements over and over until
specified conditions are met.
-> There are three statements, while, and do-while, and for, that are used for looping in C.
-> The while statement contains one expression, which is the conditional expression
which controls the loop.
-> The syntax for the while loop:
	while (expression)
		statement;
-> The do-while statement places its conditional expression at the bottom of the loop and ends with a semicolon.
-> The syntax for the do-while loop:
	do {
		statement1;
		statement2;
	} while (expression);
-> There are three expressions in the for statement. The second expression is the conditional expression.
-> The syntax for the for loop:
	for (expression1; expression2; expression3){
		statement1;
		statement2;
	}
-> Multiple expressions, combined via commas, can be used as one expression in the
for statement.
</pre>
					HOUR 8
<pre>
-> sizeof() operator is used to determine the size of data type or a variable.
-> && is a logical AND operator that only returns true when the both expressions return true after evaluation.
-> || is a logical OR operator that return true if any one of the pair expressions returns true and results to false only when both expressions are false.
-> ! is a NEGATION operator is a unary operator changes the result of an expression to false if it is true and vice versa.
-> & is a bitwise operator that compares each bit of x and the corresponding in y and only results in 1 if both bits are 1, and results in 0 if any or both bits are 0.
-> | results in 1 if any of the bits is 1 and only results to 0 if both the bits are 0.
-> ^ operator places 1 in the result if one operand, but not both, is 1.
-> ~ operator takes one operand and reverses each bit in the operand.
-> >> operator shifts the bits of an operand to the right.
-> << operator shifts the bits of an operand to the left.
-> ?: is the conditional operator.
-> Syntax for ?: is
	x ? y : z
-> x contains the test condition. If x results to true, y is chosen. If x evaluates to false, z is chosen.
</pre>
					HOUR 9
<pre>
-> An absolute value is the distance of the number from zero.
-> sign bit indicates if a number is negative in C.
-> In integer data types(char, int, short int, long int), the leftmost bit is used as the sign bit.
-> A signed data type means it can hold both negative and positive values.
-> An unsigned data type indicates to the compiler that the data type can only hold non-negative values.
-> short modifier is used to reduce the memory size of a data type.
-> long modifier is used to increase the storage space of a data type.
</pre>
					HOUR 10
<pre>
-> if statement syntax:
	if (expression)
{
	statement1;
}
-> When the expression evaluates to true, the statements within the if statement are executed.
-> if...else statement is an extension on the if statement.
-> When the expression in the if statement evaluates to false, the statements in the else block are executed.
-> Nested if statements can be used to make a series of related decisions.
-> switch statement are used when there is unlimited decisions to be made depending on an expression.
-> switch statement syntax:
	switch (expression)
{	
	case constant-expression:
		statement1;
	case constant-expression:
		statement2;
	default:
		statement-default;
}
-> The break statement can be used to exit the switch construct or a loop.
-> The continue statement is used to let you stay within a loop while skipping over some statements.
</pre>
					HOUR 11
<pre>
-> A pointer(address variable) is a special variable that contains the address of another variable.
-> A variable has two values: a) left value(memory address)	b) right value(a specific value).
-> & is the address-of operator which is used to determine the address of a variable.
-> %p is the format specifier to print out the address of a variable using printf.
-> An asterisk is used to declare a pointer.
-> An asterisk is used to access the content of the address stored in a pointer.
-> A null pointer has a right value that is 0.
-> Several pointers can point to the same location of a variable in the memory.
-> You can update the value of a variable referred by a pointer variable.
</pre>
					HOUR 12
<pre>
-> An array is a collection of variable of the same data type.
-> Each item in the array is called an element.
-> Syntax to declare an array:
	data-type array-name[array-size];
-> All arrays are indexed from 0.
-> sizeof(array-name) can be used to determine the size of an array.
-> You can display all the element of an array using a for loop. In case of a character array, we can use the %s which is a format specifier to display a string using printf.
-> The null character('\0') marks the end of a string.
-> When declaring a 2-dimensional array, the size of the first dimension must be indicated.
-> A pointer is said to refer to an array when the address of the first element in the array is assigned to the pointer.
</pre>
					HOUR 13
<pre>
-> A character string is a character array ending with a null character.
-> The length of a string can be shorter than its character array.
-> A string constant is a series of characters enclosed in double quotes.
-> A character array only becomes a character string when the null character is added at the end.
-> A character constant is a character enclosed in single quotes.
-> You cannot assign a character constant to a pointer variable.
-> size_t is a data type defined in the string.h file.
-> strlen() does not count the null character.
-> strcpy() is used to copy a string from array to another.
-> strcpy() returns the value of src if it is successful.
-> %s is the format specifier to display a string using printf.
-> A character string can be assigned to a char pointer.
-> The puts() function adds a newline character by default.
</pre>
					HOUR 14
<pre>
-> A block refers to any sets of statements enclosed in braces.
-> A variable declared within a block has block scope or local scope.
-> Function scope indicates that a variable is active and visible from the beginning to the end of a function.
-> Program scope is when the variable is declared outside a function or global scope.
-> Storage class of a variable refers to the combination of its spatial and temporal regions.
-> Temporal refers to duration.
-> auto specifier indicates that the memory location of a variable is temporary.
-> auto specifier is only used with variables that have block scope.
-> static specifier makes the variable to have a permanent duration.
-> static specifier can be used by either local or global variables.
-> A variable with file scope is visible from its declaration point to the end of the file.
-> register specifier is to suggest to the compiler to store a variable in the register for faster access.
-> extern specifier allude to a global variable defined in a different file other than the one being executed at that moment.
-> A variable initialized with const modifier cannot be changed after initialization.
-> A goto label has function scope.
</pre>
						HOUR 15
<pre>
-> A function can be declared to return any data type, except an array or function.
-> By default, the return type of a function is int.
-> The number and types of an argument passed to a function are called the function prototype.
-> A function call is an expression that can be used as a single statement or within other statements.
-> void is used in the declaration to indicate to the compiler that no argument or return type is needed by the function.
-> time.h file contains all the declarations of all the date and time functions.
-> There three types of functions: a) takes no arguments b) takes a fixed number of arguments c) takes a variable number of arguments.
-> A function declaration alludes to a function that is defined elsewhere, and specifies what type of arguments and values are passed to and returned from the function as well.
-> A function definition reserves the memory space and defines what the function does, as well as the number and type of arguments passed to the function.
-> The declaration of a variable or function specifies the interpretation and attributes of a set of identifiers.
-> The definition requires the compiler to reserve storage for a variable or function named by an identifier.
-> stdarg.h file enables a person to write functions that take a variable number of arguments.
</pre>
						HOUR 16
<pre>
-> Format to change the position of a pointer: pointerName + n.
-> You need to initialize a pointer to a legal address before you can dereference it.
-> The scalar size of a pointer is determined by the size of its data type, which is specified in the pointer declaration.
-> You can pass an unsized array as a single argument to a function.
</pre>
 						HOUR 17
<pre>
-> malloc() function is used to allocate a specified size of memory space.
-> malloc() returns a void pointer.
-> When malloc() fails, it returns a null pointer.
-> free() function is used to release allocated memory.
-> calloc() function is similar to malloc().
-> The main difference is that calloc() takes in two arguments and the memory allocated
   by calloc() is initialized to zero.
-> The realloc() function gives you a means to change the size of a piece memory space allocated
   by the malloc(), calloc(), or even realloc() itself.
-> realloc() can be used in place of free() when zero is passed in as the second argument.
-> If a null pointer is passed to the realloc() function as its first argument, the function act    s like the malloc() function.
-> You have to include the header file stdlib.h before you can call the malloc(), calloc(), real    loc(),
   or free() function.
-> It's good practice to check the value returned by the memory allocation function before using
   the allocated memory space.
</pre>
 				HOUR 18
<pre>
-> enum short for enumerated can be used to declare named integer constants.
-> General form of the enum type is:
         enum tag_name {enumeration_list} variable_list;
-> Integer value associated with the leftmost name in the enumeration list field start with 0.
-> typedef helps in creating own names for data types.
-> typedef is used to consolidate complex data types into a single word and then use the word
   in variable declarations in your program.
-> A function that can call itself from a statement inside the body of the function itself
   is called a recursive function.
-> A recursive function may run slower than their iterative equivalents due to the overhead
   of repeated function calls.
-> A command-line argument is a parameter that follows a program's name when the program is invo    ked from the operating system's command line.
-> argc and argv are built-in functions to receive command-line arguments.
-> argc is used to store the number of arguments on the command line.
-> argv is a pointer to an array of char pointers.
</pre>
						HOUR 19
<pre>
-> structure can be used to group variables of different types.
-> The data items in a structure are called members of the structure.
-> The struct keyword is used to start a structure declaration or a structure variable definition.
-> The dot operator (.) is used to separate a structure name and a member name in referencing
   the structure member.
-> The arrow operator (->) is commonly used to reference a structure member using a pointer to the structure.
-> You can enclose a structure withing another structure.
</pre>
