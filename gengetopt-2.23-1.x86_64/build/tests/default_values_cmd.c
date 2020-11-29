/*
  File autogenerated by gengetopt 
  generated with the following command:
  /usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/build/tests/../src/.libs/gengetopt --gen-version --input=/usr/local/src/cygwin-gengetopt/gengetopt-2.23-1.x86_64/src/gengetopt-2.23/tests/default_values_cmd.ggo --func-name=default_values_cmd_parser --file-name=default_values_cmd --unnamed-opt --show-required 

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

#include "default_values_cmd.h"

const char *gengetopt_args_info_purpose = "";

const char *gengetopt_args_info_usage = "Usage: default_values [OPTION]... [FILE]...";

const char *gengetopt_args_info_versiontext = "";

const char *gengetopt_args_info_description = "";

const char *gengetopt_args_info_help[] = {
  "  -h, --help                  Print help and exit",
  "  -V, --version               Print version and exit",
  "  -f, --foo=INT               foo option  (default=`15000')",
  "  -b, --bar=STRING            bar option  (default=`this is a default')",
  "  -F, --foo-opt[=INT]         foo option with optional arg  (default=`15000')",
  "  -B, --bar-opt[=STRING]      bar option with optional arg  (default=`this is a\n                                default')",
  "      --foofloat=FLOAT        foo float option  (default=`15000')",
  "      --foodouble=DOUBLE      foo double option  (default=`15000')",
  "  -p, --pi=DOUBLE             PI option  (default=`3.1415926536')",
  "  -s, --timeout=123456789012  number of seconds after the scanning is cancelled\n                                if no progress is shown at all.\n                                (default=`120')",
    0
};

typedef enum {ARG_NO
  , ARG_STRING
  , ARG_INT
  , ARG_FLOAT
  , ARG_DOUBLE
} default_values_cmd_parser_arg_type;

static
void clear_given (struct gengetopt_args_info *args_info);
static
void clear_args (struct gengetopt_args_info *args_info);

static int
default_values_cmd_parser_internal (int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct default_values_cmd_parser_params *params, const char *additional_error);


static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct gengetopt_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->foo_given = 0 ;
  args_info->bar_given = 0 ;
  args_info->foo_opt_given = 0 ;
  args_info->bar_opt_given = 0 ;
  args_info->foofloat_given = 0 ;
  args_info->foodouble_given = 0 ;
  args_info->pi_given = 0 ;
  args_info->timeout_given = 0 ;
}

static
void clear_args (struct gengetopt_args_info *args_info)
{
  FIX_UNUSED (args_info);
  args_info->foo_arg = 15000;
  args_info->foo_orig = NULL;
  args_info->bar_arg = gengetopt_strdup ("this is a default");
  args_info->bar_orig = NULL;
  args_info->foo_opt_arg = 15000;
  args_info->foo_opt_orig = NULL;
  args_info->bar_opt_arg = gengetopt_strdup ("this is a default");
  args_info->bar_opt_orig = NULL;
  args_info->foofloat_arg = 15000;
  args_info->foofloat_orig = NULL;
  args_info->foodouble_arg = 15000;
  args_info->foodouble_orig = NULL;
  args_info->pi_arg = 3.1415926536;
  args_info->pi_orig = NULL;
  args_info->timeout_arg = 120;
  args_info->timeout_orig = NULL;
  
}

static
void init_args_info(struct gengetopt_args_info *args_info)
{


  args_info->help_help = gengetopt_args_info_help[0] ;
  args_info->version_help = gengetopt_args_info_help[1] ;
  args_info->foo_help = gengetopt_args_info_help[2] ;
  args_info->bar_help = gengetopt_args_info_help[3] ;
  args_info->foo_opt_help = gengetopt_args_info_help[4] ;
  args_info->bar_opt_help = gengetopt_args_info_help[5] ;
  args_info->foofloat_help = gengetopt_args_info_help[6] ;
  args_info->foodouble_help = gengetopt_args_info_help[7] ;
  args_info->pi_help = gengetopt_args_info_help[8] ;
  args_info->timeout_help = gengetopt_args_info_help[9] ;
  
}

void
default_values_cmd_parser_print_version (void)
{
  printf ("%s %s\n",
     (strlen(DEFAULT_VALUES_CMD_PARSER_PACKAGE_NAME) ? DEFAULT_VALUES_CMD_PARSER_PACKAGE_NAME : DEFAULT_VALUES_CMD_PARSER_PACKAGE),
     DEFAULT_VALUES_CMD_PARSER_VERSION);

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
default_values_cmd_parser_print_help (void)
{
  int i = 0;
  print_help_common();
  while (gengetopt_args_info_help[i])
    printf("%s\n", gengetopt_args_info_help[i++]);
}

void
default_values_cmd_parser_init (struct gengetopt_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);

  args_info->inputs = 0;
  args_info->inputs_num = 0;
}

void
default_values_cmd_parser_params_init(struct default_values_cmd_parser_params *params)
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

struct default_values_cmd_parser_params *
default_values_cmd_parser_params_create(void)
{
  struct default_values_cmd_parser_params *params = 
    (struct default_values_cmd_parser_params *)malloc(sizeof(struct default_values_cmd_parser_params));
  default_values_cmd_parser_params_init(params);  
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
default_values_cmd_parser_release (struct gengetopt_args_info *args_info)
{
  unsigned int i;
  free_string_field (&(args_info->foo_orig));
  free_string_field (&(args_info->bar_arg));
  free_string_field (&(args_info->bar_orig));
  free_string_field (&(args_info->foo_opt_orig));
  free_string_field (&(args_info->bar_opt_arg));
  free_string_field (&(args_info->bar_opt_orig));
  free_string_field (&(args_info->foofloat_orig));
  free_string_field (&(args_info->foodouble_orig));
  free_string_field (&(args_info->pi_orig));
  free_string_field (&(args_info->timeout_orig));
  
  
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
default_values_cmd_parser_dump(FILE *outfile, struct gengetopt_args_info *args_info)
{
  int i = 0;

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot dump options to stream\n", DEFAULT_VALUES_CMD_PARSER_PACKAGE);
      return EXIT_FAILURE;
    }

  if (args_info->help_given)
    write_into_file(outfile, "help", 0, 0 );
  if (args_info->version_given)
    write_into_file(outfile, "version", 0, 0 );
  if (args_info->foo_given)
    write_into_file(outfile, "foo", args_info->foo_orig, 0);
  if (args_info->bar_given)
    write_into_file(outfile, "bar", args_info->bar_orig, 0);
  if (args_info->foo_opt_given)
    write_into_file(outfile, "foo-opt", args_info->foo_opt_orig, 0);
  if (args_info->bar_opt_given)
    write_into_file(outfile, "bar-opt", args_info->bar_opt_orig, 0);
  if (args_info->foofloat_given)
    write_into_file(outfile, "foofloat", args_info->foofloat_orig, 0);
  if (args_info->foodouble_given)
    write_into_file(outfile, "foodouble", args_info->foodouble_orig, 0);
  if (args_info->pi_given)
    write_into_file(outfile, "pi", args_info->pi_orig, 0);
  if (args_info->timeout_given)
    write_into_file(outfile, "timeout", args_info->timeout_orig, 0);
  

  i = EXIT_SUCCESS;
  return i;
}

int
default_values_cmd_parser_file_save(const char *filename, struct gengetopt_args_info *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", DEFAULT_VALUES_CMD_PARSER_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  i = default_values_cmd_parser_dump(outfile, args_info);
  fclose (outfile);

  return i;
}

void
default_values_cmd_parser_free (struct gengetopt_args_info *args_info)
{
  default_values_cmd_parser_release (args_info);
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
default_values_cmd_parser (int argc, char **argv, struct gengetopt_args_info *args_info)
{
  return default_values_cmd_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
default_values_cmd_parser_ext (int argc, char **argv, struct gengetopt_args_info *args_info,
                   struct default_values_cmd_parser_params *params)
{
  int result;
  result = default_values_cmd_parser_internal (argc, argv, args_info, params, 0);

  if (result == EXIT_FAILURE)
    {
      default_values_cmd_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
default_values_cmd_parser2 (int argc, char **argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required)
{
  int result;
  struct default_values_cmd_parser_params params;
  
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;

  result = default_values_cmd_parser_internal (argc, argv, args_info, &params, 0);

  if (result == EXIT_FAILURE)
    {
      default_values_cmd_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
default_values_cmd_parser_required (struct gengetopt_args_info *args_info, const char *prog_name)
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
 * @param check_ambiguity @see default_values_cmd_parser_params.check_ambiguity
 * @param override @see default_values_cmd_parser_params.override
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
               default_values_cmd_parser_arg_type arg_type,
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
  case ARG_INT:
    if (val) *((int *)field) = strtol (val, &stop_char, 0);
    break;
  case ARG_FLOAT:
    if (val) *((float *)field) = (float)strtod (val, &stop_char);
    break;
  case ARG_DOUBLE:
    if (val) *((double *)field) = strtod (val, &stop_char);
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
  case ARG_FLOAT:
  case ARG_DOUBLE:
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
default_values_cmd_parser_internal (
  int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct default_values_cmd_parser_params *params, const char *additional_error)
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
    default_values_cmd_parser_init (args_info);

  default_values_cmd_parser_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = params->print_errors;
  optopt = '?';

  while (1)
    {
      int option_index = 0;

      static struct option long_options[] = {
        { "help",	0, NULL, 'h' },
        { "version",	0, NULL, 'V' },
        { "foo",	1, NULL, 'f' },
        { "bar",	1, NULL, 'b' },
        { "foo-opt",	2, NULL, 'F' },
        { "bar-opt",	2, NULL, 'B' },
        { "foofloat",	1, NULL, 0 },
        { "foodouble",	1, NULL, 0 },
        { "pi",	1, NULL, 'p' },
        { "timeout",	1, NULL, 's' },
        { 0,  0, 0, 0 }
      };

      c = getopt_long (argc, argv, "hVf:b:F::B::p:s:", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'h':	/* Print help and exit.  */
          default_values_cmd_parser_print_help ();
          default_values_cmd_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 'V':	/* Print version and exit.  */
          default_values_cmd_parser_print_version ();
          default_values_cmd_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 'f':	/* foo option.  */
        
        
          if (update_arg( (void *)&(args_info->foo_arg), 
               &(args_info->foo_orig), &(args_info->foo_given),
              &(local_args_info.foo_given), optarg, 0, "15000", ARG_INT,
              check_ambiguity, override, 0, 0,
              "foo", 'f',
              additional_error))
            goto failure;
        
          break;
        case 'b':	/* bar option.  */
        
        
          if (update_arg( (void *)&(args_info->bar_arg), 
               &(args_info->bar_orig), &(args_info->bar_given),
              &(local_args_info.bar_given), optarg, 0, "this is a default", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "bar", 'b',
              additional_error))
            goto failure;
        
          break;
        case 'F':	/* foo option with optional arg.  */
        
        
          if (update_arg( (void *)&(args_info->foo_opt_arg), 
               &(args_info->foo_opt_orig), &(args_info->foo_opt_given),
              &(local_args_info.foo_opt_given), optarg, 0, "15000", ARG_INT,
              check_ambiguity, override, 0, 0,
              "foo-opt", 'F',
              additional_error))
            goto failure;
        
          break;
        case 'B':	/* bar option with optional arg.  */
        
        
          if (update_arg( (void *)&(args_info->bar_opt_arg), 
               &(args_info->bar_opt_orig), &(args_info->bar_opt_given),
              &(local_args_info.bar_opt_given), optarg, 0, "this is a default", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "bar-opt", 'B',
              additional_error))
            goto failure;
        
          break;
        case 'p':	/* PI option.  */
        
        
          if (update_arg( (void *)&(args_info->pi_arg), 
               &(args_info->pi_orig), &(args_info->pi_given),
              &(local_args_info.pi_given), optarg, 0, "3.1415926536", ARG_DOUBLE,
              check_ambiguity, override, 0, 0,
              "pi", 'p',
              additional_error))
            goto failure;
        
          break;
        case 's':	/* number of seconds after the scanning is cancelled if no progress is shown at all..  */
        
        
          if (update_arg( (void *)&(args_info->timeout_arg), 
               &(args_info->timeout_orig), &(args_info->timeout_given),
              &(local_args_info.timeout_given), optarg, 0, "120", ARG_INT,
              check_ambiguity, override, 0, 0,
              "timeout", 's',
              additional_error))
            goto failure;
        
          break;

        case 0:	/* Long option with no short option */
          /* foo float option.  */
          if (strcmp (long_options[option_index].name, "foofloat") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->foofloat_arg), 
                 &(args_info->foofloat_orig), &(args_info->foofloat_given),
                &(local_args_info.foofloat_given), optarg, 0, "15000", ARG_FLOAT,
                check_ambiguity, override, 0, 0,
                "foofloat", '-',
                additional_error))
              goto failure;
          
          }
          /* foo double option.  */
          else if (strcmp (long_options[option_index].name, "foodouble") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->foodouble_arg), 
                 &(args_info->foodouble_orig), &(args_info->foodouble_given),
                &(local_args_info.foodouble_given), optarg, 0, "15000", ARG_DOUBLE,
                check_ambiguity, override, 0, 0,
                "foodouble", '-',
                additional_error))
              goto failure;
          
          }
          
          break;
        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", DEFAULT_VALUES_CMD_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */



	FIX_UNUSED(check_required);

  default_values_cmd_parser_release (&local_args_info);

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
  
  default_values_cmd_parser_release (&local_args_info);
  return (EXIT_FAILURE);
}
/* vim: set ft=c noet ts=8 sts=8 sw=8 tw=80 nojs spell : */
