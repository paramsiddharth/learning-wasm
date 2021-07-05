(module
	(import "env" "memory" (memory 1))
	(import "env" "table" (table 1 funcref))

	(type $shared (func (result i32)))

	(func (export "getMyNumber") (result i32)
		i32.const 0
		i32.const 118
		i32.store
		
		(call_indirect (type $shared) (i32.const 0))
	)
)