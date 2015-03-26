// Copyright 2015 chaishushan@gmail.com. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

package main

/*
#cgo CXXFLAGS: -w -I./internal/protobuf-cpp-3.0.0-alpha-2/src -I./internal/protobuf-cpp-3.0.0-alpha-2/vsprojects

#include "ccapi.h"
#include <stdlib.h>
*/
import "C"
import (
	"os"
	"unsafe"
)

func main() {
	argc := C.int(len(os.Args))
	argv := make([]*C.char, len(os.Args))
	for i := 0; i < len(os.Args); i++ {
		argv[i] = C.CString(os.Args[i])
		defer C.free(unsafe.Pointer(argv[i]))
	}
	rv := C.protocMain(argc, (**C.char)(unsafe.Pointer(&argv[0])))
	os.Exit(int(rv))
}
