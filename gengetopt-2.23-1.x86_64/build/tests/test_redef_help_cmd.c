/*
  File autogenerated by gengetopt 
  generated with the following command:
  /usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/build/tests/../src/.libs/gengetopt --gen-version --input=/usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/src/gengetopt-2.23/tests/test_redef_help_cmd.ggo --func-name=test_redef_help_cmd_parser --file-name=test_redef_help_cmd --unnamed-opt --show-required 

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

#include "test_redef_help_cmd.h"

const char *gengetopt_args_info_purpose = "";

const char *gengetopt_args_info_usage = "Usage: test_redef_help [OPTION]... [FILE]...";

const char *gengetopt_args_info_versiontext = "";

const char *gengetopt_args_info_description = "";

const char *gengetopt_args_info_help[] = {
  "      --help     Print help and exit",
  "      --version  Print version and exit",
  "  -h, --height   height",
  "  -V, --vavoom   vavoom instead of version",
    0
};

typedef enum {ARG_NO
} test_redef_help_cmd_parser_arg_type;

static
void clear_given (struct gengetopt_args_info *args_info);
static
void clear_args (struct gengetopt_args_info *args_info);

static int
test_redef_help_cmd_parser_internal (int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct test_redef_help_cmd_parser_params *params, const char *additional_error);


static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct gengetopt_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->height_given = 0 ;
  args_info->vavoom_given = 0 ;
}

static
void clear_args (struct gengetopt_args_info *args_info)
{
  FIX_UNUSED (args_info);
  
}

static
void init_args_info(struct gengetopt_args_info *args_info)
{


  args_info->help_help = gengetopt_args_info_help[0] ;
  args_info->version_help = gengetopt_args_info_help[1] ;
  args_info->height_help = gengetopt_args_info_help[2] ;
  args_info->vavoom_help = gengetopt_args_info_help[3] ;
  
}

void
test_redef_help_cmd_parser_print_version (void)
{
  printf ("%s %s\n",
     (strlen(TEST_REDEF_HELP_CMD_PARSER_PACKAGE_NAME) ? TEST_REDEF_HELP_CMD_PARSER_PACKAGE_NAME : TEST_REDEF_HELP_CMD_PARSER_PACKAGE),
     TEST_REDEF_HELP_CMD_PARSER_VERSION);

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
test_redef_help_cmd_parser_print_help (void)
{
  int i = 0;
  print_help_common();
  while (gengetopt_args_info_help[i])
    printf("%s\n", gengetopt_args_info_help[i++]);
}

void
test_redef_help_cmd_parser_init (struct gengetopt_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);

  args_info->inputs = 0;
  args_info->inputs_num = 0;
}

void
test_redef_help_cmd_parser_params_init(struct test_redef_help_cmd_parser_params *params)
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

struct test_redef_help_cmd_parser_params *
test_redef_help_cmd_parser_params_create(void)
{
  struct test_redef_help_cmd_parser_params *params = 
    (struct test_redef_help_cmd_parser_params *)malloc(sizeof(struct test_redef_help_cmd_parser_params));
  test_redef_help_cmd_parser_params_init(params);  
  return params;
}



static void
test_redef_help_cmd_parser_release (struct gengetopt_args_info *args_info)
{
  unsigned int i;
  
  
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
test_redef_help_cmd_parser_dump(FILE *outfile, struct gengetopt_args_info *args_info)
{
  int i = 0;

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot dump options to stream\n", TEST_REDEF_HELP_CMD_PARSER_PACKAGE);
      return EXIT_FAILURE;
    }

  if (args_info->help_given)
    write_into_file(outfile, "help", 0, 0 );
  if (args_info->version_given)
    write_into_file(outfile, "version", 0, 0 );
  if (args_info->height_given)
    write_into_file(outfile, "height", 0, 0 );
  if (args_info->vavoom_given)
    write_into_file(outfile, "vavoom", 0, 0 );
  

  i = EXIT_SUCCESS;
  return i;
}

int
test_redef_help_cmd_parser_file_save(const char *filename, struct gengetopt_args_info *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", TEST_REDEF_HELP_CMD_PARSER_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  i = test_redef_help_cmd_parser_dump(outfile, args_info);
  fclose (outfile);

  return i;
}

void
test_redef_help_cmd_parser_free (struct gengetopt_args_info *args_info)
{
  test_redef_help_cmd_parser_release (args_info);
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
test_redef_help_cmd_parser (int argc, char **argv, struct gengetopt_args_info *args_info)
{
  return test_redef_help_cmd_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
test_redef_help_cmd_parser_ext (int argc, char **argv, struct gengetopt_args_info *args_info,
                   struct test_redef_help_cmd_parser_params *params)
{
  int result;
  result = test_redef_help_cmd_parser_internal (argc, argv, args_info, params, 0);

  if (result == EXIT_FAILURE)
    {
      test_redef_help_cmd_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
test_redef_help_cmd_parser2 (int argc, char **argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required)
{
  int result;
  struct test_redef_help_cmd_parser_params params;
  
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;

  result = test_redef_help_cmd_parser_internal (argc, argv, args_info, &params, 0);

  if (result == EXIT_FAILURE)
    {
      test_redef_help_cmd_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
test_redef_help_cmd_parser_required (struct gengetopt_args_info *args_info, const char *prog_name)
{
  FIX_UNUSED (args_info);
  FIX_UNUSED (prog_name);
  return EXIT_SUCCESS;
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
 * @param check_ambiguity @see test_redef_help_cmd_parser_params.check_ambiguity
 * @param override @see test_redef_help_cmd_parser_params.override
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
               test_redef_help_cmd_parser_arg_type arg_type,
               int check_ambiguity, int override,
               int no_free, int multiple_option,
               const char *long_opt, char short_opt,
               const char *additional_error)
{
  char *stop_char = 0;
  const char *val = value;
  int found;
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
  default:
    break;
  };

	FIX_UNUSED(stop_char);
			FIX_UNUSED(val);
	
  /* store the original value */
  switch(arg_type) {
  case ARG_NO:
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
test_redef_help_cmd_parser_internal (
  int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct test_redef_help_cmd_parser_params *params, const char *additional_error)
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
    test_redef_help_cmd_parser_init (args_info);

  test_redef_help_cmd_parser_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = params->print_errors;
  optopt = '?';

  while (1)
    {
      int option_index = 0;

      static struct option long_options[] = {
        { "help",	0, NULL, 0 },
        { "version",	0, NULL, 0 },
        { "height",	0, NULL, 'h' },
        { "vavoom",	0, NULL, 'V' },
        { 0,  0, 0, 0 }
      };

      c = getopt_long (argc, argv, "hV", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'h':	/* height.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->height_given),
              &(local_args_info.height_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "height", 'h',
              additional_error))
            goto failure;
        
          break;
        case 'V':	/* vavoom instead of version.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->vavoom_given),
              &(local_args_info.vavoom_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "vavoom", 'V',
              additional_error))
            goto failure;
        
          break;

        case 0:	/* Long option with no short option */
          if (strcmp (long_options[option_index].name, "help") == 0) {
            test_redef_help_cmd_parser_print_help ();
            test_redef_help_cmd_parser_free (&local_args_info);
            exit (EXIT_SUCCESS);
          }

          if (strcmp (long_options[option_index].name, "version") == 0) {
            test_redef_help_cmd_parser_print_version ();
            test_redef_help_cmd_parser_free (&local_args_info);
            exit (EXIT_SUCCESS);
          }

        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", TEST_REDEF_HELP_CMD_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */



	FIX_UNUSED(check_required);

  test_redef_help_cmd_parser_release (&local_args_info);

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
  
  test_redef_help_cmd_parser_release (&local_args_info);
  return (EXIT_FAILURE);
}
/* vim: set ft=c noet ts=8 sts=8 sw=8 tw=80 nojs spell : */
