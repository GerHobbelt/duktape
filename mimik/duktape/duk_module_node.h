#if !defined(DUK_MODULE_NODE_H_INCLUDED)
#define DUK_MODULE_NODE_H_INCLUDED

#include "duktape.h"
#ifdef __cplusplus
extern "C" {  // only need to export C interface if
              // used by C++ source code
#endif
extern duk_ret_t duk_module_node_peval_main(duk_context *ctx, const char *path);
extern void duk_module_node_init(duk_context *ctx);
#endif  /* DUK_CONSOLE_H_INCLUDED */
#ifdef __cplusplus
}
#endif  /* DUK_MODULE_NODE_H_INCLUDED */
