/** @file test_align_cmd.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt 
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt */

#ifndef TEST_ALIGN_CMD_H
#define TEST_ALIGN_CMD_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TEST_ALIGN_CMD_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define TEST_ALIGN_CMD_PARSER_PACKAGE "test align"
#endif

#ifndef TEST_ALIGN_CMD_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define TEST_ALIGN_CMD_PARSER_PACKAGE_NAME "test align"
#endif

#ifndef TEST_ALIGN_CMD_PARSER_VERSION
/** @brief the program version */
#define TEST_ALIGN_CMD_PARSER_VERSION "1.0"
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *full_help_help; /**< @brief Print help, including hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  const char *hidden_option_help; /**< @brief This is the hidden option that is printed only with --full-help; thanks to its long description we force a possible different alignment for --full-help help description.  */
  const char *non_hidden_help; /**< @brief non-hidden option help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int full_help_given ;	/**< @brief Whether full-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int hidden_option_given ;	/**< @brief Whether hidden-option was given.  */
  unsigned int non_hidden_given ;	/**< @brief Whether non-hidden was given.  */

  char **inputs ; /**< @brief unnamed options (options without names) */
  unsigned inputs_num ; /**< @brief unnamed options number */
  int standalone_mode_counter; /**< @brief Counter for mode standalone */
} ;

/** @brief The additional parameters to pass to parser functions */
struct test_align_cmd_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];
/** @brief all the lines making the full help output (including hidden options) */
extern const char *gengetopt_args_info_full_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int test_align_cmd_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use test_align_cmd_parser_ext() instead
 */
int test_align_cmd_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int test_align_cmd_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct test_align_cmd_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int test_align_cmd_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int test_align_cmd_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void test_align_cmd_parser_print_help(void);
/**
 * Print the full help (including hidden options)
 */
void test_align_cmd_parser_print_full_help(void);
/**
 * Print the version
 */
void test_align_cmd_parser_print_version(void);

/**
 * Initializes all the fields a test_align_cmd_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void test_align_cmd_parser_params_init(struct test_align_cmd_parser_params *params);

/**
 * Allocates dynamically a test_align_cmd_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized test_align_cmd_parser_params structure
 */
struct test_align_cmd_parser_params *test_align_cmd_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void test_align_cmd_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void test_align_cmd_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int test_align_cmd_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TEST_ALIGN_CMD_H */
