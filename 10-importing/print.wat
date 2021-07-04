(module
	(import "console" "log" (func $log (param i32 i32 i32)))
	(func (export "showIt")
		i32.const 1
		i32.const 2
		i32.const 3
		call $log
	)
)