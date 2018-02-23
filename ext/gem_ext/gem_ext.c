#include <ruby.h>

VALUE GemExt = Qnil;
VALUE rb_module_hello_world(VALUE klass)
{
  VALUE r_hello = rb_str_new2("Hello world!");
  rb_funcall(rb_mKernel, rb_intern("puts"), 1, r_hello);
  return Qnil;
}

void
Init_gem_ext() {
  GemExt = rb_define_module("GemExt");
  rb_define_module_function(GemExt, "hello_world", rb_module_hello_world, 0);
}
