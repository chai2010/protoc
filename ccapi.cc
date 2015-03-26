// Copyright 2015 <chaishushan{AT}gmail.com>. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include "ccapi.h"

#include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/cpp/cpp_generator.h>
#include <google/protobuf/compiler/python/python_generator.h>
#include <google/protobuf/compiler/java/java_generator.h>
#include <google/protobuf/compiler/javanano/javanano_generator.h>
#include <google/protobuf/compiler/ruby/ruby_generator.h>

int protocMain(int argc, char* argv[]) {
	google::protobuf::compiler::CommandLineInterface cli;
	cli.AllowPlugins("protoc-");

	// Proto2 C++
	google::protobuf::compiler::cpp::CppGenerator cpp_generator;
	cli.RegisterGenerator("--cpp_out", "--cpp_opt", &cpp_generator, "Generate C++ header and source.");

	// Proto2 Java
	google::protobuf::compiler::java::JavaGenerator java_generator;
	cli.RegisterGenerator("--java_out", &java_generator, "Generate Java source file.");


	// Proto2 Python
	google::protobuf::compiler::python::Generator py_generator;
	cli.RegisterGenerator("--python_out", &py_generator, "Generate Python source file.");

	// Java Nano
	google::protobuf::compiler::javanano::JavaNanoGenerator javanano_generator;
	cli.RegisterGenerator("--javanano_out", &javanano_generator, "Generate Java Nano source file.");

	// Ruby
	google::protobuf::compiler::ruby::Generator rb_generator;
	cli.RegisterGenerator("--ruby_out", &rb_generator, "Generate Ruby source file.");

	return cli.Run(argc, argv);
}
