(module
 (table 0 anyfunc)
 (memory $0 1)
 (export "memory" (memory $0))
 (export "add" (func $add))
 (export "fibonacci" (func $fibonacci))
 (func $add (; 0 ;) (param $0 i32) (param $1 i32) (result i32)
  (i32.add
   (get_local $1)
   (get_local $0)
  )
 )
 (func $fibonacci (; 1 ;) (param $0 i64) (result i64)
  (block $label$0
   (br_if $label$0
    (i64.ge_s
     (get_local $0)
     (i64.const 2)
    )
   )
   (return
    (get_local $0)
   )
  )
  (i64.add
   (call $fibonacci
    (i64.add
     (get_local $0)
     (i64.const -1)
    )
   )
   (call $fibonacci
    (i64.add
     (get_local $0)
     (i64.const -2)
    )
   )
  )
 )
)
