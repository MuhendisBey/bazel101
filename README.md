## bazel101
Common Repo For Bazel Stuff

test update branch button

## Higlights

* if you have multiple WORKSPACE file, every fodler which has WORKSPACE file will be initialized from scractct. I mean depedendencies, caches will be re created.

* if there is no header under the folder but you mention glob for hdrs in the BUILD file. it gives an error.

* you can use c flags for instance: to add extra include folder
```
cc_library(
    name = "some_lib",
    srcs = ["some_lib.cc"],
    hdrs = ["include/some_lib.h"],
***    copts = ["-Ilegacy/some_lib/include"],***
)
```

## Reference
https://bazel.build/start/cpp
