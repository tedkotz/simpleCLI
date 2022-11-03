/**
 * @file    CLI.h
 * @author  Ted Kotz <ted@kotz.us>
 * @version 0.1
 *
 * [Description]
 *
 */
#ifndef   CLI_H
#define   CLI_H

/* Includes ******************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

/* Defines *******************************************************************/
#define SUCCESS 0

/* Types *********************************************************************/
/**
 * This pointer type defines the function signature expected by CLI callbacks.
 *
 * @param argc number of arguments
 * @param argv a list of string arguments
 * @return Error Code, 0 means success
 */
typedef int (*CLI_CommandFunction) (int argc, char** argv);
//typedef int (*CLI_CommandFunction) (int argc, char** argv, char* out, int out_size);

typedef struct CLI_CommandEntry
{
  const char* command;
  // const char* helpText;
  // const ArgParse arguments;
  CLI_CommandFunction callBack;
} CLI_CommandEntry;

/* Interfaces ****************************************************************/

/**
 * A function pointer that should be set to point to the callback that returns
 * the CLI Prompt to print.
 *
 */
extern const char* (*CLI_getPrompt) (void);

/* Data **********************************************************************/

/* Functions *****************************************************************/

/**
 * Registers a CLI_CommandEntry table with the CLI framework
 *
 * @param table the table of commands to map to functions.
 * @param size the number of entries to use in table
 */
void CLI_registerCommandEntryTable ( const CLI_CommandEntry* table, int size );

/**
 * Runs a single run through the CLI Read Evaluate loop.
 *
 */
void CLI_loop(void);

/**
 * Returns the value returned by the last CLI command, useful for building
 * prompts, etc.
 *
 * @return the value returned by the last CLI command.
 */
int CLI_getLastReturnCode (void);


#ifdef  __cplusplus
}
#endif

#endif // CLI_H
