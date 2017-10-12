/*******************************************************************\

Module:

Author: Daniel Kroening, kroening@kroening.com

\*******************************************************************/

#include "std_types.h"
#include "config.h"

#include "platform_types.h"

signedbv_typet signed_word_type()
{
  signedbv_typet result(config.ansi_c.int_width);
  return result;
}

unsignedbv_typet unsigned_word_type()
{
  unsignedbv_typet result(config.ansi_c.int_width);
  return result;
}

pointer_typet pointer_type(const typet &subtype)
{
  return pointer_typet(subtype, config.ansi_c.pointer_width);
}
