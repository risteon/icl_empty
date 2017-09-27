// -- BEGIN LICENSE BLOCK ----------------------------------------------
// -- END LICENSE BLOCK ------------------------------------------------
//----------------------------------------------------------------------
/*!\file
 *
 * \author  Christoph Rist <christoph_bernd.rist@daimler.com>
 * \date    2017-09-24
 *
 */
//----------------------------------------------------------------------

#include <cstdint>

#include <icl_empty_core/demo.h>

int main (int argc, char** argv)
{
  icl_empty::core::Foo foo{};
  foo.hello();

  return 0;
}
