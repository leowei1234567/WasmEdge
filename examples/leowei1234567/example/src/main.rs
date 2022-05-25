use wasmedge_hostfunctionexample_interface::*;

fn main() {
    set_class_id(100);
    set_class_level(2);
    set_class_name("WasmEdge");
    print();
}
