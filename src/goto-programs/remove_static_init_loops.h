/*******************************************************************\

Module: Unwind loops in static initializers

Author: Daniel Kroening, kroening@kroening.com

\*******************************************************************/

/// \file
/// Unwind loops in static initializers

#ifndef CPROVER_GOTO_PROGRAMS_REMOVE_STATIC_INIT_LOOPS_H
#define CPROVER_GOTO_PROGRAMS_REMOVE_STATIC_INIT_LOOPS_H

#include <goto-programs/goto_functions.h>

#include <util/message.h>
#include <util/options.h>
#include <util/symbol_table.h>

class goto_modelt;

void remove_static_init_loops(
  const goto_modelt &,
  optionst &,
  message_handlert &);

#endif // CPROVER_GOTO_PROGRAMS_REMOVE_STATIC_INIT_LOOPS_H
