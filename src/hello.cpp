#include<pybind11/pybind11.h>
#include <torch/extension.h>
namespace py = pybind11;

PYBIND11_MODULE(hellworld, m) {

    m.doc() = "pybind11 example module";

    // Add bindings here
    m.def("foo", []() {
        return "Hello, World!";
    });

}
