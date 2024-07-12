load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "globExample",
    srcs = glob(["*.cpp", "*.c"]),
    deps = ["//lib:libEcho"],
)