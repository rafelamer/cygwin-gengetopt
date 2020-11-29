/*
  File autogenerated by gengetopt 
  generated with the following command:
  /usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/build/tests/../src/.libs/gengetopt --gen-version --input=/usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/src/gengetopt-2.23/tests/test_all_opts_cmd.ggo --func-name=test_all_opts_cmd_parser --file-name=test_all_opts_cmd --unnamed-opt --show-required 

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FIX_UNUSED
#define FIX_UNUSED(X) (void) (X) /* avoid warnings for unused params */
#endif

#include <getopt.h>

#include "test_all_opts_cmd.h"

const char *gengetopt_args_info_purpose = "This is just a gengetopt's test file";

const char *gengetopt_args_info_usage = "Usage: test_all_opts [OPTION]... [FILE]...";

const char *gengetopt_args_info_versiontext = "This text is printed after the version during --version\nthis is a test this is a test this is a test this is a test this is a test this\nis a test this is a test this is a test this is a test this is a test!";

const char *gengetopt_args_info_description = "This is just a test file\n\nto test all possible\ncommand line type options.\n\nIn ggo files comments start with # and end at EOL";

const char *gengetopt_args_info_detailed_help[] = {
  "  -h, --help                    Print help and exit",
  "      --detailed-help           Print help, including all details and hidden\n                                  options, and exit",
  "      --full-help               Print help, including hidden options, and exit",
  "  -V, --version                 Print version and exit",
  "",
  "  -s, --string=STRING            string option",
  "  -i, --int=INT                 int option",
  "  -S, --short=SHORT             short option",
  "  -l, --long=LONG               long option",
  "  -f, --float=FLOAT             float option",
  "  -d, --double=DOUBLE           double option",
  "  -D, --longdouble=LONGDOUBLE   longdouble option",
  "  -L, --longlong=LONGLONG       longlong option",
  "  -F, --flag                    flag option  (default=on)",
  "  -u, --function                function option",
  "  \n  a `function' option is basically an option with no argument.  It can be used,\n  e.g., to specify a specific behavior for a program.\n\n  Well, this further explanation is quite useless, but it's only to show an\n  example of an option with details, which will be printed only when\n  --detailed-help is given at the command line.\n",
  "      --no-short                no short option",
  "      --opt-arg[=STRING]        option with optional arg",
  "  -o, --opt-arg-short[=STRING]  option with optional arg (short)",
  "  -r, --required=STRING         required option (mandatory)",
  "  NOTICE: This option is required, so, unless you specify (-h)--help or\n  (-V)--version, you must always specify this option (and its argument) at\n  command line.",
  "\nBefore the dependant option there is a hidden option, so it shouldn't be\nvisible in the output of --help, but it will be visible in the output of\n--full-help.\n",
  "  -H, --hidden=INT              hidden option",
  "  -A, --dependant=STRING        option that depends on opt-arg",
  "\nThis is a text line just to write something in the output\n\nNotice that a text line can contain line breaks, just like this very text, and\nthat, just like all the other texts, it is wrapped by gengetopt automatically\nif it's too long.\n\nMoreover, text can be specified more than once in the input file.\n",
  "      --very-very-long-option=STRING\n                                the name of this option is long enough to make\n                                  this description begin on a new line",
  "  -y, --assume-multimeth-virtual\n                                the name of this option is just as long as the\n                                  maximum allowed, so this description begin on\n                                  a new line",
  "      --file-save=STRING        save the passed options into a file",
  "\nA text after all options.",
    0
};
static void
init_full_help_array(void)
{
  gengetopt_args_info_full_help[0] = gengetopt_args_info_detailed_help[0];
  gengetopt_args_info_full_help[1] = gengetopt_args_info_detailed_help[1];
  gengetopt_args_info_full_help[2] = gengetopt_args_info_detailed_help[2];
  gengetopt_args_info_full_help[3] = gengetopt_args_info_detailed_help[3];
  gengetopt_args_info_full_help[4] = gengetopt_args_info_detailed_help[4];
  gengetopt_args_info_full_help[5] = gengetopt_args_info_detailed_help[5];
  gengetopt_args_info_full_help[6] = gengetopt_args_info_detailed_help[6];
  gengetopt_args_info_full_help[7] = gengetopt_args_info_detailed_help[7];
  gengetopt_args_info_full_help[8] = gengetopt_args_info_detailed_help[8];
  gengetopt_args_info_full_help[9] = gengetopt_args_info_detailed_help[9];
  gengetopt_args_info_full_help[10] = gengetopt_args_info_detailed_help[10];
  gengetopt_args_info_full_help[11] = gengetopt_args_info_detailed_help[11];
  gengetopt_args_info_full_help[12] = gengetopt_args_info_detailed_help[12];
  gengetopt_args_info_full_help[13] = gengetopt_args_info_detailed_help[13];
  gengetopt_args_info_full_help[14] = gengetopt_args_info_detailed_help[14];
  gengetopt_args_info_full_help[15] = gengetopt_args_info_detailed_help[16];
  gengetopt_args_info_full_help[16] = gengetopt_args_info_detailed_help[17];
  gengetopt_args_info_full_help[17] = gengetopt_args_info_detailed_help[18];
  gengetopt_args_info_full_help[18] = gengetopt_args_info_detailed_help[19];
  gengetopt_args_info_full_help[19] = gengetopt_args_info_detailed_help[21];
  gengetopt_args_info_full_help[20] = gengetopt_args_info_detailed_help[22];
  gengetopt_args_info_full_help[21] = gengetopt_args_info_detailed_help[23];
  gengetopt_args_info_full_help[22] = gengetopt_args_info_detailed_help[24];
  gengetopt_args_info_full_help[23] = gengetopt_args_info_detailed_help[25];
  gengetopt_args_info_full_help[24] = gengetopt_args_info_detailed_help[26];
  gengetopt_args_info_full_help[25] = gengetopt_args_info_detailed_help[27];
  gengetopt_args_info_full_help[26] = gengetopt_args_info_detailed_help[28];
  gengetopt_args_info_full_help[27] = 0; 
  
}

const char *gengetopt_args_info_full_help[28];

static void
init_help_array(void)
{
  gengetopt_args_info_help[0] = gengetopt_args_info_detailed_help[0];
  gengetopt_args_info_help[1] = gengetopt_args_info_detailed_help[1];
  gengetopt_args_info_help[2] = gengetopt_args_info_detailed_help[2];
  gengetopt_args_info_help[3] = gengetopt_args_info_detailed_help[3];
  gengetopt_args_info_help[4] = gengetopt_args_info_detailed_help[4];
  gengetopt_args_info_help[5] = gengetopt_args_info_detailed_help[5];
  gengetopt_args_info_help[6] = gengetopt_args_info_detailed_help[6];
  gengetopt_args_info_help[7] = gengetopt_args_info_detailed_help[7];
  gengetopt_args_info_help[8] = gengetopt_args_info_detailed_help[8];
  gengetopt_args_info_help[9] = gengetopt_args_info_detailed_help[9];
  gengetopt_args_info_help[10] = gengetopt_args_info_detailed_help[10];
  gengetopt_args_info_help[11] = gengetopt_args_info_detailed_help[11];
  gengetopt_args_info_help[12] = gengetopt_args_info_detailed_help[12];
  gengetopt_args_info_help[13] = gengetopt_args_info_detailed_help[13];
  gengetopt_args_info_help[14] = gengetopt_args_info_detailed_help[14];
  gengetopt_args_info_help[15] = gengetopt_args_info_detailed_help[16];
  gengetopt_args_info_help[16] = gengetopt_args_info_detailed_help[17];
  gengetopt_args_info_help[17] = gengetopt_args_info_detailed_help[18];
  gengetopt_args_info_help[18] = gengetopt_args_info_detailed_help[19];
  gengetopt_args_info_help[19] = gengetopt_args_info_detailed_help[21];
  gengetopt_args_info_help[20] = gengetopt_args_info_detailed_help[23];
  gengetopt_args_info_help[21] = gengetopt_args_info_detailed_help[24];
  gengetopt_args_info_help[22] = gengetopt_args_info_detailed_help[25];
  gengetopt_args_info_help[23] = gengetopt_args_info_detailed_help[26];
  gengetopt_args_info_help[24] = gengetopt_args_info_detailed_help[27];
  gengetopt_args_info_help[25] = gengetopt_args_info_detailed_help[28];
  gengetopt_args_info_help[26] = 0; 
  
}

const char *gengetopt_args_info_help[27];

typedef enum {ARG_NO
  , ARG_FLAG
  , ARG_STRING
  , ARG_INT
  , ARG_SHORT
  , ARG_LONG
  , ARG_FLOAT
  , ARG_DOUBLE
  , ARG_LONGDOUBLE
  , ARG_LONGLONG
} test_all_opts_cmd_parser_arg_type;

static
void clear_given (struct gengetopt_args_info *args_info);
static
void clear_args (struct gengetopt_args_info *args_info);

static int
test_all_opts_cmd_parser_internal (int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct test_all_opts_cmd_parser_params *params, const char *additional_error);

static int
test_all_opts_cmd_parser_required2 (struct gengetopt_args_info *args_info, const char *prog_name, const char *additional_error);

static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct gengetopt_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->detailed_help_given = 0 ;
  args_info->full_help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->string_given = 0 ;
  args_info->int_given = 0 ;
  args_info->short_given = 0 ;
  args_info->long_given = 0 ;
  args_info->float_given = 0 ;
  args_info->double_given = 0 ;
  args_info->longdouble_given = 0 ;
  args_info->longlong_given = 0 ;
  args_info->flag_given = 0 ;
  args_info->function_given = 0 ;
  args_info->no_short_given = 0 ;
  args_info->opt_arg_given = 0 ;
  args_info->opt_arg_short_given = 0 ;
  args_info->required_given = 0 ;
  args_info->hidden_given = 0 ;
  args_info->dependant_given = 0 ;
  args_info->very_very_long_option_given = 0 ;
  args_info->assume_multimeth_virtual_given = 0 ;
  args_info->file_save_given = 0 ;
}

static
void clear_args (struct gengetopt_args_info *args_info)
{
  FIX_UNUSED (args_info);
  args_info->string_arg = NULL;
  args_info->string_orig = NULL;
  args_info->int_orig = NULL;
  args_info->short_orig = NULL;
  args_info->long_orig = NULL;
  args_info->float_orig = NULL;
  args_info->double_orig = NULL;
  args_info->longdouble_orig = NULL;
  args_info->longlong_orig = NULL;
  args_info->flag_flag = 1;
  args_info->opt_arg_arg = NULL;
  args_info->opt_arg_orig = NULL;
  args_info->opt_arg_short_arg = NULL;
  args_info->opt_arg_short_orig = NULL;
  args_info->required_arg = NULL;
  args_info->required_orig = NULL;
  args_info->hidden_orig = NULL;
  args_info->dependant_arg = NULL;
  args_info->dependant_orig = NULL;
  args_info->very_very_long_option_arg = NULL;
  args_info->very_very_long_option_orig = NULL;
  args_info->file_save_arg = NULL;
  args_info->file_save_orig = NULL;
  
}

static
void init_args_info(struct gengetopt_args_info *args_info)
{
  init_full_help_array(); 
  init_help_array(); 
  args_info->help_help = gengetopt_args_info_detailed_help[0] ;
  args_info->detailed_help_help = gengetopt_args_info_detailed_help[1] ;
  args_info->full_help_help = gengetopt_args_info_detailed_help[2] ;
  args_info->version_help = gengetopt_args_info_detailed_help[3] ;
  args_info->string_help = gengetopt_args_info_detailed_help[5] ;
  args_info->int_help = gengetopt_args_info_detailed_help[6] ;
  args_info->short_help = gengetopt_args_info_detailed_help[7] ;
  args_info->long_help = gengetopt_args_info_detailed_help[8] ;
  args_info->float_help = gengetopt_args_info_detailed_help[9] ;
  args_info->double_help = gengetopt_args_info_detailed_help[10] ;
  args_info->longdouble_help = gengetopt_args_info_detailed_help[11] ;
  args_info->longlong_help = gengetopt_args_info_detailed_help[12] ;
  args_info->flag_help = gengetopt_args_info_detailed_help[13] ;
  args_info->function_help = gengetopt_args_info_detailed_help[14] ;
  args_info->no_short_help = gengetopt_args_info_detailed_help[16] ;
  args_info->opt_arg_help = gengetopt_args_info_detailed_help[17] ;
  args_info->opt_arg_short_help = gengetopt_args_info_detailed_help[18] ;
  args_info->required_help = gengetopt_args_info_detailed_help[19] ;
  args_info->hidden_help = gengetopt_args_info_detailed_help[22] ;
  args_info->dependant_help = gengetopt_args_info_detailed_help[23] ;
  args_info->very_very_long_option_help = gengetopt_args_info_detailed_help[25] ;
  args_info->assume_multimeth_virtual_help = gengetopt_args_info_detailed_help[26] ;
  args_info->file_save_help = gengetopt_args_info_detailed_help[27] ;
  
}

void
test_all_opts_cmd_parser_print_version (void)
{
  printf ("%s %s\n",
     (strlen(TEST_ALL_OPTS_CMD_PARSER_PACKAGE_NAME) ? TEST_ALL_OPTS_CMD_PARSER_PACKAGE_NAME : TEST_ALL_OPTS_CMD_PARSER_PACKAGE),
     TEST_ALL_OPTS_CMD_PARSER_VERSION);

  if (strlen(gengetopt_args_info_versiontext) > 0)
    printf("\n%s\n", gengetopt_args_info_versiontext);
}

static void print_help_common(void)
{
	size_t len_purpose = strlen(gengetopt_args_info_purpose);
	size_t len_usage = strlen(gengetopt_args_info_usage);

	if (len_usage > 0) {
		printf("%s\n", gengetopt_args_info_usage);
	}
	if (len_purpose > 0) {
		printf("%s\n", gengetopt_args_info_purpose);
	}

	if (len_usage || len_purpose) {
		printf("\n");
	}

	if (strlen(gengetopt_args_info_description) > 0) {
		printf("%s\n\n", gengetopt_args_info_description);
	}
}

void
test_all_opts_cmd_parser_print_help (void)
{
  int i = 0;
  print_help_common();
  while (gengetopt_args_info_help[i])
    printf("%s\n", gengetopt_args_info_help[i++]);
}

void
test_all_opts_cmd_parser_print_full_help (void)
{
  int i = 0;
  print_help_common();
  while (gengetopt_args_info_full_help[i])
    printf("%s\n", gengetopt_args_info_full_help[i++]);
}

void
test_all_opts_cmd_parser_print_detailed_help (void)
{
  int i = 0;
  print_help_common();
  while (gengetopt_args_info_detailed_help[i])
    printf("%s\n", gengetopt_args_info_detailed_help[i++]);
}

void
test_all_opts_cmd_parser_init (struct gengetopt_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);

  args_info->inputs = 0;
  args_info->inputs_num = 0;
}

void
test_all_opts_cmd_parser_params_init(struct test_all_opts_cmd_parser_params *params)
{
  if (params)
    { 
      params->override = 0;
      params->initialize = 1;
      params->check_required = 1;
      params->check_ambiguity = 0;
      params->print_errors = 1;
    }
}

struct test_all_opts_cmd_parser_params *
test_all_opts_cmd_parser_params_create(void)
{
  struct test_all_opts_cmd_parser_params *params = 
    (struct test_all_opts_cmd_parser_params *)malloc(sizeof(struct test_all_opts_cmd_parser_params));
  test_all_opts_cmd_parser_params_init(params);  
  return params;
}

static void
free_string_field (char **s)
{
  if (*s)
    {
      free (*s);
      *s = 0;
    }
}


static void
test_all_opts_cmd_parser_release (struct gengetopt_args_info *args_info)
{
  unsigned int i;
  free_string_field (&(args_info->string_arg));
  free_string_field (&(args_info->string_orig));
  free_string_field (&(args_info->int_orig));
  free_string_field (&(args_info->short_orig));
  free_string_field (&(args_info->long_orig));
  free_string_field (&(args_info->float_orig));
  free_string_field (&(args_info->double_orig));
  free_string_field (&(args_info->longdouble_orig));
  free_string_field (&(args_info->longlong_orig));
  free_string_field (&(args_info->opt_arg_arg));
  free_string_field (&(args_info->opt_arg_orig));
  free_string_field (&(args_info->opt_arg_short_arg));
  free_string_field (&(args_info->opt_arg_short_orig));
  free_string_field (&(args_info->required_arg));
  free_string_field (&(args_info->required_orig));
  free_string_field (&(args_info->hidden_orig));
  free_string_field (&(args_info->dependant_arg));
  free_string_field (&(args_info->dependant_orig));
  free_string_field (&(args_info->very_very_long_option_arg));
  free_string_field (&(args_info->very_very_long_option_orig));
  free_string_field (&(args_info->file_save_arg));
  free_string_field (&(args_info->file_save_orig));
  
  
  for (i = 0; i < args_info->inputs_num; ++i)
    free (args_info->inputs [i]);

  if (args_info->inputs_num)
    free (args_info->inputs);

  clear_given (args_info);
}


static void
write_into_file(FILE *outfile, const char *opt, const char *arg, const char *values[])
{
  FIX_UNUSED (values);
  if (arg) {
    fprintf(outfile, "%s=\"%s\"\n", opt, arg);
  } else {
    fprintf(outfile, "%s\n", opt);
  }
}


int
test_all_opts_cmd_parser_dump(FILE *outfile, struct gengetopt_args_info *args_info)
{
  int i = 0;

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot dump options to stream\n", TEST_ALL_OPTS_CMD_PARSER_PACKAGE);
      return EXIT_FAILURE;
    }

  if (args_info->help_given)
    write_into_file(outfile, "help", 0, 0 );
  if (args_info->detailed_help_given)
    write_into_file(outfile, "detailed-help", 0, 0 );
  if (args_info->full_help_given)
    write_into_file(outfile, "full-help", 0, 0 );
  if (args_info->version_given)
    write_into_file(outfile, "version", 0, 0 );
  if (args_info->string_given)
    write_into_file(outfile, "string", args_info->string_orig, 0);
  if (args_info->int_given)
    write_into_file(outfile, "int", args_info->int_orig, 0);
  if (args_info->short_given)
    write_into_file(outfile, "short", args_info->short_orig, 0);
  if (args_info->long_given)
    write_into_file(outfile, "long", args_info->long_orig, 0);
  if (args_info->float_given)
    write_into_file(outfile, "float", args_info->float_orig, 0);
  if (args_info->double_given)
    write_into_file(outfile, "double", args_info->double_orig, 0);
  if (args_info->longdouble_given)
    write_into_file(outfile, "longdouble", args_info->longdouble_orig, 0);
  if (args_info->longlong_given)
    write_into_file(outfile, "longlong", args_info->longlong_orig, 0);
  if (args_info->flag_given)
    write_into_file(outfile, "flag", 0, 0 );
  if (args_info->function_given)
    write_into_file(outfile, "function", 0, 0 );
  if (args_info->no_short_given)
    write_into_file(outfile, "no-short", 0, 0 );
  if (args_info->opt_arg_given)
    write_into_file(outfile, "opt-arg", args_info->opt_arg_orig, 0);
  if (args_info->opt_arg_short_given)
    write_into_file(outfile, "opt-arg-short", args_info->opt_arg_short_orig, 0);
  if (args_info->required_given)
    write_into_file(outfile, "required", args_info->required_orig, 0);
  if (args_info->hidden_given)
    write_into_file(outfile, "hidden", args_info->hidden_orig, 0);
  if (args_info->dependant_given)
    write_into_file(outfile, "dependant", args_info->dependant_orig, 0);
  if (args_info->very_very_long_option_given)
    write_into_file(outfile, "very-very-long-option", args_info->very_very_long_option_orig, 0);
  if (args_info->assume_multimeth_virtual_given)
    write_into_file(outfile, "assume-multimeth-virtual", 0, 0 );
  if (args_info->file_save_given)
    write_into_file(outfile, "file-save", args_info->file_save_orig, 0);
  

  i = EXIT_SUCCESS;
  return i;
}

int
test_all_opts_cmd_parser_file_save(const char *filename, struct gengetopt_args_info *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", TEST_ALL_OPTS_CMD_PARSER_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  i = test_all_opts_cmd_parser_dump(outfile, args_info);
  fclose (outfile);

  return i;
}

void
test_all_opts_cmd_parser_free (struct gengetopt_args_info *args_info)
{
  test_all_opts_cmd_parser_release (args_info);
}

/** @brief replacement of strdup, which is not standard */
char *
gengetopt_strdup (const char *s)
{
  char *result = 0;
  if (!s)
    return result;

  result = (char*)malloc(strlen(s) + 1);
  if (result == (char*)0)
    return (char*)0;
  strcpy(result, s);
  return result;
}

int
test_all_opts_cmd_parser (int argc, char **argv, struct gengetopt_args_info *args_info)
{
  return test_all_opts_cmd_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
test_all_opts_cmd_parser_ext (int argc, char **argv, struct gengetopt_args_info *args_info,
                   struct test_all_opts_cmd_parser_params *params)
{
  int result;
  result = test_all_opts_cmd_parser_internal (argc, argv, args_info, params, 0);

  if (result == EXIT_FAILURE)
    {
      test_all_opts_cmd_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
test_all_opts_cmd_parser2 (int argc, char **argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required)
{
  int result;
  struct test_all_opts_cmd_parser_params params;
  
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;

  result = test_all_opts_cmd_parser_internal (argc, argv, args_info, &params, 0);

  if (result == EXIT_FAILURE)
    {
      test_all_opts_cmd_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
test_all_opts_cmd_parser_required (struct gengetopt_args_info *args_info, const char *prog_name)
{
  int result = EXIT_SUCCESS;

  if (test_all_opts_cmd_parser_required2(args_info, prog_name, 0) > 0)
    result = EXIT_FAILURE;

  if (result == EXIT_FAILURE)
    {
      test_all_opts_cmd_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
test_all_opts_cmd_parser_required2 (struct gengetopt_args_info *args_info, const char *prog_name, const char *additional_error)
{
  int error_occurred = 0;
  FIX_UNUSED (additional_error);

  /* checks for required options */
  if (! args_info->required_given)
    {
      fprintf (stderr, "%s: '--required' ('-r') option required%s\n", prog_name, (additional_error ? additional_error : ""));
      error_occurred = 1;
    }
  
  
  /* checks for dependences among options */
  if (args_info->dependant_given && ! args_info->opt_arg_given)
    {
      fprintf (stderr, "%s: '--dependant' ('-A') option depends on option 'opt-arg'%s\n", prog_name, (additional_error ? additional_error : ""));
      error_occurred = 1;
    }

  return error_occurred;
}


static char *package_name = 0;

/**
 * @brief updates an option
 * @param field the generic pointer to the field to update
 * @param orig_field the pointer to the orig field
 * @param field_given the pointer to the number of occurrence of this option
 * @param prev_given the pointer to the number of occurrence already seen
 * @param value the argument for this option (if null no arg was specified)
 * @param possible_values the possible values for this option (if specified)
 * @param default_value the default value (in case the option only accepts fixed values)
 * @param arg_type the type of this option
 * @param check_ambiguity @see test_all_opts_cmd_parser_params.check_ambiguity
 * @param override @see test_all_opts_cmd_parser_params.override
 * @param no_free whether to free a possible previous value
 * @param multiple_option whether this is a multiple option
 * @param long_opt the corresponding long option
 * @param short_opt the corresponding short option (or '-' if none)
 * @param additional_error possible further error specification
 */
static
int update_arg(void *field, char **orig_field,
               unsigned int *field_given, unsigned int *prev_given, 
               char *value, const char *possible_values[],
               const char *default_value,
               test_all_opts_cmd_parser_arg_type arg_type,
               int check_ambiguity, int override,
               int no_free, int multiple_option,
               const char *long_opt, char short_opt,
               const char *additional_error)
{
  char *stop_char = 0;
  const char *val = value;
  int found;
  char **string_field;
  FIX_UNUSED (field);

  stop_char = 0;
  found = 0;

  if (!multiple_option && prev_given && (*prev_given || (check_ambiguity && *field_given)))
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: `--%s' (`-%c') option given more than once%s\n", 
               package_name, long_opt, short_opt,
               (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: `--%s' option given more than once%s\n", 
               package_name, long_opt,
               (additional_error ? additional_error : ""));
      return 1; /* failure */
    }

  FIX_UNUSED (default_value);
    
  if (field_given && *field_given && ! override)
    return 0;
  if (prev_given)
    (*prev_given)++;
  if (field_given)
    (*field_given)++;
  if (possible_values)
    val = possible_values[found];

  switch(arg_type) {
  case ARG_FLAG:
    *((int *)field) = !*((int *)field);
    break;
  case ARG_INT:
    if (val) *((int *)field) = strtol (val, &stop_char, 0);
    break;
  case ARG_SHORT:
    if (val) *((short *)field) = (short)strtol (val, &stop_char, 0);
    break;
  case ARG_LONG:
    if (val) *((long *)field) = (long)strtol (val, &stop_char, 0);
    break;
  case ARG_FLOAT:
    if (val) *((float *)field) = (float)strtod (val, &stop_char);
    break;
  case ARG_DOUBLE:
    if (val) *((double *)field) = strtod (val, &stop_char);
    break;
  case ARG_LONGDOUBLE:
    if (val) *((long double *)field) = (long double)strtod (val, &stop_char);
    break;
  case ARG_LONGLONG:
#if defined(HAVE_LONG_LONG) || defined(HAVE_LONG_LONG_INT)
    if (val) *((long long int*)field) = (long long int) strtoll (val, &stop_char, 0);
#else
    if (val) *((long *)field) = (long)strtol (val, &stop_char, 0);
#endif
    break;
  case ARG_STRING:
    if (val) {
      string_field = (char **)field;
      if (!no_free && *string_field)
        free (*string_field); /* free previous string */
      *string_field = gengetopt_strdup (val);
    }
    break;
  default:
    break;
  };

  /* check numeric conversion */
  switch(arg_type) {
  case ARG_INT:
  case ARG_SHORT:
  case ARG_LONG:
  case ARG_FLOAT:
  case ARG_DOUBLE:
  case ARG_LONGDOUBLE:
  case ARG_LONGLONG:
    if (val && !(stop_char && *stop_char == '\0')) {
      fprintf(stderr, "%s: invalid numeric value: %s\n", package_name, val);
      return 1; /* failure */
    }
    break;
  default:
    ;
  };

  /* store the original value */
  switch(arg_type) {
  case ARG_NO:
  case ARG_FLAG:
    break;
  default:
    if (value && orig_field) {
      if (no_free) {
        *orig_field = value;
      } else {
        if (*orig_field)
          free (*orig_field); /* free previous string */
        *orig_field = gengetopt_strdup (value);
      }
    }
  };

  return 0; /* OK */
}


int
test_all_opts_cmd_parser_internal (
  int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct test_all_opts_cmd_parser_params *params, const char *additional_error)
{
  int c;	/* Character of the parsed option.  */

  int error_occurred = 0;
  struct gengetopt_args_info local_args_info;
  
  int override;
  int initialize;
  int check_required;
  int check_ambiguity;
  
  package_name = argv[0];
  
  /* TODO: Why is this here? It is not used anywhere. */
  override = params->override;
  FIX_UNUSED(override);

  initialize = params->initialize;
  check_required = params->check_required;

  /* TODO: Why is this here? It is not used anywhere. */
  check_ambiguity = params->check_ambiguity;
  FIX_UNUSED(check_ambiguity);

  if (initialize)
    test_all_opts_cmd_parser_init (args_info);

  test_all_opts_cmd_parser_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = params->print_errors;
  optopt = '?';

  while (1)
    {
      int option_index = 0;

      static struct option long_options[] = {
        { "help",	0, NULL, 'h' },
        { "detailed-help",	0, NULL, 0 },
        { "full-help",	0, NULL, 0 },
        { "version",	0, NULL, 'V' },
        { "string",	1, NULL, 's' },
        { "int",	1, NULL, 'i' },
        { "short",	1, NULL, 'S' },
        { "long",	1, NULL, 'l' },
        { "float",	1, NULL, 'f' },
        { "double",	1, NULL, 'd' },
        { "longdouble",	1, NULL, 'D' },
        { "longlong",	1, NULL, 'L' },
        { "flag",	0, NULL, 'F' },
        { "function",	0, NULL, 'u' },
        { "no-short",	0, NULL, 0 },
        { "opt-arg",	2, NULL, 0 },
        { "opt-arg-short",	2, NULL, 'o' },
        { "required",	1, NULL, 'r' },
        { "hidden",	1, NULL, 'H' },
        { "dependant",	1, NULL, 'A' },
        { "very-very-long-option",	1, NULL, 0 },
        { "assume-multimeth-virtual",	0, NULL, 'y' },
        { "file-save",	1, NULL, 0 },
        { 0,  0, 0, 0 }
      };

      c = getopt_long (argc, argv, "hVs:i:S:l:f:d:D:L:Fuo::r:H:A:y", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'h':	/* Print help and exit.  */
          test_all_opts_cmd_parser_print_help ();
          test_all_opts_cmd_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 'V':	/* Print version and exit.  */
          test_all_opts_cmd_parser_print_version ();
          test_all_opts_cmd_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 's':	/*  string option.  */
        
        
          if (update_arg( (void *)&(args_info->string_arg), 
               &(args_info->string_orig), &(args_info->string_given),
              &(local_args_info.string_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "string", 's',
              additional_error))
            goto failure;
        
          break;
        case 'i':	/* int option.  */
        
        
          if (update_arg( (void *)&(args_info->int_arg), 
               &(args_info->int_orig), &(args_info->int_given),
              &(local_args_info.int_given), optarg, 0, 0, ARG_INT,
              check_ambiguity, override, 0, 0,
              "int", 'i',
              additional_error))
            goto failure;
        
          break;
        case 'S':	/* short option.  */
        
        
          if (update_arg( (void *)&(args_info->short_arg), 
               &(args_info->short_orig), &(args_info->short_given),
              &(local_args_info.short_given), optarg, 0, 0, ARG_SHORT,
              check_ambiguity, override, 0, 0,
              "short", 'S',
              additional_error))
            goto failure;
        
          break;
        case 'l':	/* long option.  */
        
        
          if (update_arg( (void *)&(args_info->long_arg), 
               &(args_info->long_orig), &(args_info->long_given),
              &(local_args_info.long_given), optarg, 0, 0, ARG_LONG,
              check_ambiguity, override, 0, 0,
              "long", 'l',
              additional_error))
            goto failure;
        
          break;
        case 'f':	/* float option.  */
        
        
          if (update_arg( (void *)&(args_info->float_arg), 
               &(args_info->float_orig), &(args_info->float_given),
              &(local_args_info.float_given), optarg, 0, 0, ARG_FLOAT,
              check_ambiguity, override, 0, 0,
              "float", 'f',
              additional_error))
            goto failure;
        
          break;
        case 'd':	/* double option.  */
        
        
          if (update_arg( (void *)&(args_info->double_arg), 
               &(args_info->double_orig), &(args_info->double_given),
              &(local_args_info.double_given), optarg, 0, 0, ARG_DOUBLE,
              check_ambiguity, override, 0, 0,
              "double", 'd',
              additional_error))
            goto failure;
        
          break;
        case 'D':	/* longdouble option.  */
        
        
          if (update_arg( (void *)&(args_info->longdouble_arg), 
               &(args_info->longdouble_orig), &(args_info->longdouble_given),
              &(local_args_info.longdouble_given), optarg, 0, 0, ARG_LONGDOUBLE,
              check_ambiguity, override, 0, 0,
              "longdouble", 'D',
              additional_error))
            goto failure;
        
          break;
        case 'L':	/* longlong option.  */
        
        
          if (update_arg( (void *)&(args_info->longlong_arg), 
               &(args_info->longlong_orig), &(args_info->longlong_given),
              &(local_args_info.longlong_given), optarg, 0, 0, ARG_LONGLONG,
              check_ambiguity, override, 0, 0,
              "longlong", 'L',
              additional_error))
            goto failure;
        
          break;
        case 'F':	/* flag option.  */
        
        
          if (update_arg((void *)&(args_info->flag_flag), 0, &(args_info->flag_given),
              &(local_args_info.flag_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "flag", 'F',
              additional_error))
            goto failure;
        
          break;
        case 'u':	/* function option.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->function_given),
              &(local_args_info.function_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "function", 'u',
              additional_error))
            goto failure;
        
          break;
        case 'o':	/* option with optional arg (short).  */
        
        
          if (update_arg( (void *)&(args_info->opt_arg_short_arg), 
               &(args_info->opt_arg_short_orig), &(args_info->opt_arg_short_given),
              &(local_args_info.opt_arg_short_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "opt-arg-short", 'o',
              additional_error))
            goto failure;
        
          break;
        case 'r':	/* required option.  */
        
        
          if (update_arg( (void *)&(args_info->required_arg), 
               &(args_info->required_orig), &(args_info->required_given),
              &(local_args_info.required_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "required", 'r',
              additional_error))
            goto failure;
        
          break;
        case 'H':	/* hidden option.  */
        
        
          if (update_arg( (void *)&(args_info->hidden_arg), 
               &(args_info->hidden_orig), &(args_info->hidden_given),
              &(local_args_info.hidden_given), optarg, 0, 0, ARG_INT,
              check_ambiguity, override, 0, 0,
              "hidden", 'H',
              additional_error))
            goto failure;
        
          break;
        case 'A':	/* option that depends on opt-arg.  */
        
        
          if (update_arg( (void *)&(args_info->dependant_arg), 
               &(args_info->dependant_orig), &(args_info->dependant_given),
              &(local_args_info.dependant_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "dependant", 'A',
              additional_error))
            goto failure;
        
          break;
        case 'y':	/* the name of this option is just as long as the maximum allowed, so this description begin on a new line.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->assume_multimeth_virtual_given),
              &(local_args_info.assume_multimeth_virtual_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "assume-multimeth-virtual", 'y',
              additional_error))
            goto failure;
        
          break;

        case 0:	/* Long option with no short option */
          if (strcmp (long_options[option_index].name, "detailed-help") == 0) {
            test_all_opts_cmd_parser_print_detailed_help ();
            test_all_opts_cmd_parser_free (&local_args_info);
            exit (EXIT_SUCCESS);
          }

          if (strcmp (long_options[option_index].name, "full-help") == 0) {
            test_all_opts_cmd_parser_print_full_help ();
            test_all_opts_cmd_parser_free (&local_args_info);
            exit (EXIT_SUCCESS);
          }

          /* no short option.  */
          if (strcmp (long_options[option_index].name, "no-short") == 0)
          {
          
          
            if (update_arg( 0 , 
                 0 , &(args_info->no_short_given),
                &(local_args_info.no_short_given), optarg, 0, 0, ARG_NO,
                check_ambiguity, override, 0, 0,
                "no-short", '-',
                additional_error))
              goto failure;
          
          }
          /* option with optional arg.  */
          else if (strcmp (long_options[option_index].name, "opt-arg") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->opt_arg_arg), 
                 &(args_info->opt_arg_orig), &(args_info->opt_arg_given),
                &(local_args_info.opt_arg_given), optarg, 0, 0, ARG_STRING,
                check_ambiguity, override, 0, 0,
                "opt-arg", '-',
                additional_error))
              goto failure;
          
          }
          /* the name of this option is long enough to make this description begin on a new line.  */
          else if (strcmp (long_options[option_index].name, "very-very-long-option") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->very_very_long_option_arg), 
                 &(args_info->very_very_long_option_orig), &(args_info->very_very_long_option_given),
                &(local_args_info.very_very_long_option_given), optarg, 0, 0, ARG_STRING,
                check_ambiguity, override, 0, 0,
                "very-very-long-option", '-',
                additional_error))
              goto failure;
          
          }
          /* save the passed options into a file.  */
          else if (strcmp (long_options[option_index].name, "file-save") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->file_save_arg), 
                 &(args_info->file_save_orig), &(args_info->file_save_given),
                &(local_args_info.file_save_given), optarg, 0, 0, ARG_STRING,
                check_ambiguity, override, 0, 0,
                "file-save", '-',
                additional_error))
              goto failure;
          
          }
          
          break;
        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", TEST_ALL_OPTS_CMD_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */



  if (check_required)
    {
      error_occurred += test_all_opts_cmd_parser_required2 (args_info, argv[0], additional_error);
    }

  test_all_opts_cmd_parser_release (&local_args_info);

  if ( error_occurred )
    return (EXIT_FAILURE);

  if (optind < argc)
    {
      int i = 0 ;
      int found_prog_name = 0;
      /* whether program name, i.e., argv[0], is in the remaining args
         (this may happen with some implementations of getopt,
          but surely not with the one included by gengetopt) */

      i = optind;
      while (i < argc)
        if (argv[i++] == argv[0]) {
          found_prog_name = 1;
          break;
        }
      i = 0;

      args_info->inputs_num = argc - optind - found_prog_name;
      args_info->inputs =
        (char **)(malloc ((args_info->inputs_num)*sizeof(char *))) ;
      while (optind < argc)
        if (argv[optind++] != argv[0])
          args_info->inputs[ i++ ] = gengetopt_strdup (argv[optind-1]) ;
    }

  return 0;

failure:
  
  test_all_opts_cmd_parser_release (&local_args_info);
  return (EXIT_FAILURE);
}
/* vim: set ft=c noet ts=8 sts=8 sw=8 tw=80 nojs spell : */
