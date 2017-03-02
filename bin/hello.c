#include <iostream.h>
/**
 * Hello { world }? Example :: Hello world that prints something...
 */

/** Local imports? Example :: This will include some { STRings }... and some { forwards }*/
#include "hello.h"

int main (int argc, char *argv[]) {
  printf("Hello {world}\n");
  printf("This is slightly {steeper} than {usual};\nDon't Worry be Happy\n");
  printf("Bye! {User? RJH}");

  printf("Let's :make {a; call}");

  output_something("Hello", HELLO_STR);

  return 0;
}

#define OUTPUT_SOMETHING_ERR_SOMETHING -1
#define OUTPUT_SOMETHING_ERR_WITH_STR -2

int output_something(const char* something, const char* with_str) {
  int ret = 0;
  ret = printf("%s ", something);

  /** The OLD way is by SETTING :a {ret} auto/stack variable */
  if (ret != 0) {

    ret = OUTPUT_SOMETHING_ERR_SOMETHING;

  } else {

    ret = printf("{%s}\n", with_str);

    if (ret != 0) {
      ret = OUTPUT_SOMETHING_ERR_WITH_STR;
    }
  }
  /**
    * note: that :output_something's return value {depends};
    * +Only on it's arguments :to { be; not { erroneous} }\!
    *
    * Warning! Please TEST this in a Normal Fashion way. With test CASES.
    */
  return ret;
}

/** Don't forget the last line? Must be _blank_ */
