# Copyright 2015 <chaishushan{AT}gmail.com>. All rights reserved.
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file.

project(PROTOBUF)

#------------------------------------------------------------------------------
# google protobuf

include_directories(AFTER
	./vsprojects
	./src
)

#------------------------------------------------------------------------------
# libprotobuf-lite

set(LIBPB_LITE_HDR
	./vsprojects/config.h
	./vsprojects/google/protobuf/stubs/pbconfig.h

	./src/google/protobuf/io/coded_stream.h
	./src/google/protobuf/io/coded_stream_inl.h
	./src/google/protobuf/stubs/common.h
	./src/google/protobuf/extension_set.h
	./src/google/protobuf/generated_message_util.h
	./src/google/protobuf/stubs/hash.h
	./src/google/protobuf/stubs/map_util.h
	./src/google/protobuf/message_lite.h
	./src/google/protobuf/stubs/once.h
	./src/google/protobuf/stubs/atomicops.h
	./src/google/protobuf/stubs/atomicops_internals_x86_msvc.h
	./src/google/protobuf/stubs/platform_macros.h
	./src/google/protobuf/repeated_field.h
	./src/google/protobuf/stubs/stl_util.h
	./src/google/protobuf/wire_format_lite.h
	./src/google/protobuf/wire_format_lite_inl.h
	./src/google/protobuf/io/zero_copy_stream.h
	./src/google/protobuf/io/zero_copy_stream_impl_lite.h
	./src/google/protobuf/stubs/stringprintf.h
	./src/google/protobuf/stubs/template_util.h
	./src/google/protobuf/stubs/type_traits.h
)

set(LIBPB_LITE_SRC
	./src/google/protobuf/stubs/atomicops_internals_x86_gcc.cc
	./src/google/protobuf/stubs/atomicops_internals_x86_msvc.cc
	./src/google/protobuf/stubs/common.cc
	./src/google/protobuf/stubs/once.cc
	./src/google/protobuf/stubs/stringprintf.cc
	./src/google/protobuf/arena.cc
	./src/google/protobuf/arenastring.cc
	./src/google/protobuf/extension_set.cc
	./src/google/protobuf/generated_message_util.cc
	./src/google/protobuf/message_lite.cc
	./src/google/protobuf/repeated_field.cc
	./src/google/protobuf/wire_format_lite.cc
	./src/google/protobuf/io/coded_stream.cc
	./src/google/protobuf/io/zero_copy_stream.cc
	./src/google/protobuf/io/zero_copy_stream_impl_lite.cc
)

#------------------------------------------------------------------------------
# libprotobuf-lite

set(LIBPB_HDR
	./vsprojects/config.h
	./vsprojects/google/protobuf/stubs/pbconfig.h

	./src/google/protobuf/io/coded_stream.h
	./src/google/protobuf/io/coded_stream_inl.h
	./src/google/protobuf/stubs/common.h
	./src/google/protobuf/descriptor.h
	./src/google/protobuf/descriptor.pb.h
	./src/google/protobuf/descriptor_database.h
	./src/google/protobuf/dynamic_message.h
	./src/google/protobuf/extension_set.h
	./src/google/protobuf/generated_message_reflection.h
	./src/google/protobuf/generated_message_util.h
	./src/google/protobuf/io/gzip_stream.h
	./src/google/protobuf/io/strtod.h
	./src/google/protobuf/stubs/hash.h
	./src/google/protobuf/compiler/importer.h
	./src/google/protobuf/stubs/map_util.h
	./src/google/protobuf/message.h
	./src/google/protobuf/message_lite.h
	./src/google/protobuf/stubs/atomicops.h
	./src/google/protobuf/stubs/atomicops_internals_x86_msvc.h
	./src/google/protobuf/stubs/platform_macros.h
	./src/google/protobuf/stubs/once.h
	./src/google/protobuf/compiler/parser.h
	./src/google/protobuf/io/printer.h
	./src/google/protobuf/reflection_ops.h
	./src/google/protobuf/repeated_field.h
	./src/google/protobuf/service.h
	./src/google/protobuf/stubs/stl_util.h
	./src/google/protobuf/stubs/stringprintf.h
	./src/google/protobuf/stubs/template_util.h
	./src/google/protobuf/stubs/type_traits.h
	./src/google/protobuf/stubs/strutil.h
	./src/google/protobuf/stubs/substitute.h
	./src/google/protobuf/text_format.h
	./src/google/protobuf/io/tokenizer.h
	./src/google/protobuf/unknown_field_set.h
	./src/google/protobuf/wire_format.h
	./src/google/protobuf/wire_format_lite.h
	./src/google/protobuf/wire_format_lite_inl.h
	./src/google/protobuf/io/zero_copy_stream.h
	./src/google/protobuf/io/zero_copy_stream_impl.h
	./src/google/protobuf/io/zero_copy_stream_impl_lite.h
)

set(LIBPB_SRC
	./src/google/protobuf/stubs/atomicops_internals_x86_gcc.cc
	./src/google/protobuf/stubs/atomicops_internals_x86_msvc.cc
	./src/google/protobuf/stubs/common.cc
	./src/google/protobuf/stubs/once.cc
	./src/google/protobuf/stubs/stringprintf.cc
	./src/google/protobuf/arena.cc
	./src/google/protobuf/arenastring.cc
	./src/google/protobuf/extension_set.cc
	./src/google/protobuf/generated_message_util.cc
	./src/google/protobuf/map_field.cc
	./src/google/protobuf/message_lite.cc
	./src/google/protobuf/repeated_field.cc
	./src/google/protobuf/wire_format_lite.cc
	./src/google/protobuf/io/coded_stream.cc
	./src/google/protobuf/io/zero_copy_stream.cc
	./src/google/protobuf/io/zero_copy_stream_impl_lite.cc
	./src/google/protobuf/stubs/strutil.cc
	./src/google/protobuf/stubs/strutil.h
	./src/google/protobuf/stubs/substitute.cc
	./src/google/protobuf/stubs/substitute.h
	./src/google/protobuf/stubs/structurally_valid.cc
	./src/google/protobuf/descriptor.cc
	./src/google/protobuf/descriptor_database.cc
	./src/google/protobuf/descriptor.pb.cc
	./src/google/protobuf/dynamic_message.cc
	./src/google/protobuf/extension_set_heavy.cc
	./src/google/protobuf/generated_message_reflection.cc
	./src/google/protobuf/message.cc
	./src/google/protobuf/reflection_internal.h
	./src/google/protobuf/reflection_ops.cc
	./src/google/protobuf/service.cc
	./src/google/protobuf/text_format.cc
	./src/google/protobuf/unknown_field_set.cc
	./src/google/protobuf/wire_format.cc
	./src/google/protobuf/io/gzip_stream.cc
	./src/google/protobuf/io/printer.cc
	./src/google/protobuf/io/strtod.cc
	./src/google/protobuf/io/tokenizer.cc
	./src/google/protobuf/io/zero_copy_stream_impl.cc
	./src/google/protobuf/compiler/importer.cc
	./src/google/protobuf/compiler/parser.cc
)

#------------------------------------------------------------------------------
# libprotoc

set(LIBPBC_HDR
	./src/google/protobuf/compiler/code_generator.h
	./src/google/protobuf/compiler/command_line_interface.h
	./src/google/protobuf/compiler/subprocess.h
	./src/google/protobuf/compiler/zip_writer.h
	./src/google/protobuf/compiler/plugin.h
	./src/google/protobuf/compiler/plugin.pb.h

	./src/google/protobuf/compiler/cpp/cpp_enum.h
	./src/google/protobuf/compiler/cpp/cpp_enum_field.h
	./src/google/protobuf/compiler/cpp/cpp_extension.h
	./src/google/protobuf/compiler/cpp/cpp_field.h
	./src/google/protobuf/compiler/cpp/cpp_file.h
	./src/google/protobuf/compiler/cpp/cpp_generator.h
	./src/google/protobuf/compiler/cpp/cpp_helpers.h
	./src/google/protobuf/compiler/cpp/cpp_message.h
	./src/google/protobuf/compiler/cpp/cpp_message_field.h
	./src/google/protobuf/compiler/cpp/cpp_options.h
	./src/google/protobuf/compiler/cpp/cpp_primitive_field.h
	./src/google/protobuf/compiler/cpp/cpp_service.h
	./src/google/protobuf/compiler/cpp/cpp_string_field.h

	./src/google/protobuf/compiler/java/java_context.h
	./src/google/protobuf/compiler/java/java_enum.h
	./src/google/protobuf/compiler/java/java_enum_field.h
	./src/google/protobuf/compiler/java/java_extension.h
	./src/google/protobuf/compiler/java/java_field.h
	./src/google/protobuf/compiler/java/java_file.h
	./src/google/protobuf/compiler/java/java_generator.h
	./src/google/protobuf/compiler/java/java_generator_factory.h
	./src/google/protobuf/compiler/java/java_helpers.h
	./src/google/protobuf/compiler/java/java_lazy_message_field.h
	./src/google/protobuf/compiler/java/java_message.h
	./src/google/protobuf/compiler/java/java_message_field.h
	./src/google/protobuf/compiler/java/java_name_resolver.h
	./src/google/protobuf/compiler/java/java_primitive_field.h
	./src/google/protobuf/compiler/java/java_service.h
	./src/google/protobuf/compiler/java/java_shared_code_generator.h
	./src/google/protobuf/compiler/java/java_string_field.h
	./src/google/protobuf/compiler/java/java_doc_comment.h

	./src/google/protobuf/compiler/javanano/javanano_enum_field.h
	./src/google/protobuf/compiler/javanano/javanano_enum.h
	./src/google/protobuf/compiler/javanano/javanano_extension.h
	./src/google/protobuf/compiler/javanano/javanano_field.h
	./src/google/protobuf/compiler/javanano/javanano_file.h
	./src/google/protobuf/compiler/javanano/javanano_generator.h
	./src/google/protobuf/compiler/javanano/javanano_helpers.h
	./src/google/protobuf/compiler/javanano/javanano_map_field.h
	./src/google/protobuf/compiler/javanano/javanano_message_field.h
	./src/google/protobuf/compiler/javanano/javanano_message.h
	./src/google/protobuf/compiler/javanano/javanano_params.h
	./src/google/protobuf/compiler/javanano/javanano_primitive_field.h

	./src/google/protobuf/compiler/python/python_generator.h
	./src/google/protobuf/compiler/ruby/ruby_generator.h
)

set(LIBPBC_SRC
	./src/google/protobuf/compiler/code_generator.cc
	./src/google/protobuf/compiler/command_line_interface.cc

	./src/google/protobuf/compiler/cpp/cpp_enum.cc
	./src/google/protobuf/compiler/cpp/cpp_enum_field.cc
	./src/google/protobuf/compiler/cpp/cpp_extension.cc
	./src/google/protobuf/compiler/cpp/cpp_field.cc
	./src/google/protobuf/compiler/cpp/cpp_file.cc
	./src/google/protobuf/compiler/cpp/cpp_generator.cc
	./src/google/protobuf/compiler/cpp/cpp_helpers.cc
	./src/google/protobuf/compiler/cpp/cpp_map_field.cc
	./src/google/protobuf/compiler/cpp/cpp_message.cc
	./src/google/protobuf/compiler/cpp/cpp_message_field.cc
	./src/google/protobuf/compiler/cpp/cpp_primitive_field.cc
	./src/google/protobuf/compiler/cpp/cpp_service.cc
	./src/google/protobuf/compiler/cpp/cpp_string_field.cc

	./src/google/protobuf/compiler/ruby/ruby_generator.cc

	./src/google/protobuf/compiler/java/java_context.cc
	./src/google/protobuf/compiler/java/java_doc_comment.cc
	./src/google/protobuf/compiler/java/java_enum.cc
	./src/google/protobuf/compiler/java/java_enum_field.cc
	./src/google/protobuf/compiler/java/java_extension.cc
	./src/google/protobuf/compiler/java/java_field.cc
	./src/google/protobuf/compiler/java/java_file.cc
	./src/google/protobuf/compiler/java/java_generator.cc
	./src/google/protobuf/compiler/java/java_generator_factory.cc
	./src/google/protobuf/compiler/java/java_helpers.cc
	./src/google/protobuf/compiler/java/java_lazy_message_field.cc
	./src/google/protobuf/compiler/java/java_map_field.cc
	./src/google/protobuf/compiler/java/java_message.cc
	./src/google/protobuf/compiler/java/java_message_field.cc
	./src/google/protobuf/compiler/java/java_name_resolver.cc
	./src/google/protobuf/compiler/java/java_primitive_field.cc
	./src/google/protobuf/compiler/java/java_service.cc
	./src/google/protobuf/compiler/java/java_shared_code_generator.cc
	./src/google/protobuf/compiler/java/java_string_field.cc

	./src/google/protobuf/compiler/javanano/javanano_enum.cc
	./src/google/protobuf/compiler/javanano/javanano_enum_field.cc
	./src/google/protobuf/compiler/javanano/javanano_extension.cc
	./src/google/protobuf/compiler/javanano/javanano_field.cc
	./src/google/protobuf/compiler/javanano/javanano_file.cc
	./src/google/protobuf/compiler/javanano/javanano_generator.cc
	./src/google/protobuf/compiler/javanano/javanano_helpers.cc
	./src/google/protobuf/compiler/javanano/javanano_map_field.cc
	./src/google/protobuf/compiler/javanano/javanano_message.cc
	./src/google/protobuf/compiler/javanano/javanano_message_field.cc
	./src/google/protobuf/compiler/javanano/javanano_primitive_field.cc

	./src/google/protobuf/compiler/plugin.cc
	./src/google/protobuf/compiler/plugin.pb.cc

	./src/google/protobuf/compiler/python/python_generator.cc

	./src/google/protobuf/compiler/subprocess.cc
	./src/google/protobuf/compiler/zip_writer.cc
)

#------------------------------------------------------------------------------
# protoc app

add_executable(protoc
	./src/google/protobuf/compiler/main.cc

	${LIBPBC_HDR}
	${LIBPBC_SRC}

	${LIBPB_HDR}
	${LIBPB_SRC}
)

install(TARGETS protoc
	RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}
	LIBRARY DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}
	ARCHIVE DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}
)

#------------------------------------------------------------------------------

#add_executable(add_person
#	./examples/add_person.cc
#	./examples/addressbook.pb.h
#	./examples/addressbook.pb.cc
#
#	${LIBPB_LITE_HDR}
#	${LIBPB_LITE_SRC}
#)
#
#add_executable(list_people
#	./examples/list_people.cc
#	./examples/addressbook.pb.h
#	./examples/addressbook.pb.cc
#
#	${LIBPB_LITE_HDR}
#	${LIBPB_LITE_SRC}
#)
#
#install(TARGETS add_person list_people
#	RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/examples
#	LIBRARY DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/examples
#	ARCHIVE DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/examples
#)

#------------------------------------------------------------------------------
