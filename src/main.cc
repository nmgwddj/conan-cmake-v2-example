#include "fmt/color.h"

void print_hello() {
    fmt::print(fg(fmt::terminal_color::cyan), "Hello fmt {}!\n", FMT_VERSION );
}
