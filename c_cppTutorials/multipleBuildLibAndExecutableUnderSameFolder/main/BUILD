load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "libEcho",
    srcs = ["echo.cpp"],
    hdrs = ["echo.hpp"],
)

cc_binary(
    name = "mainApp",
    srcs = ["main.cpp"],
    deps = [ ":libEcho"],
)
