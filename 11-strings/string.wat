(module
	(import "env" "memory" (memory 1)) ;; At least one page
	(import "env" "print" (func $print (param i32 i32))) ;; Offset, Length
	(data (i32.const 0) "Hello, World!") ;; Offset 0
	(func (export "printHello")
		i32.const 0
		i32.const 13
		call $print
	)
)