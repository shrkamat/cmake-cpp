
#undef LTTNG_UST_TRACEPOINT_PROVIDER
#define LTTNG_UST_TRACEPOINT_PROVIDER task_annotator

#undef LTTNG_UST_TRACEPOINT_INCLUDE
#define LTTNG_UST_TRACEPOINT_INCLUDE "/home/skamath/Projects/cpp/cmake-cpp/task_annotator_tracepoints.h"

#if !defined(TASK_ANNOTATOR_TRACEPOINTS_H) || defined(LTTNG_UST_TRACEPOINT_HEADER_MULTI_READ)
#define TASK_ANNOTATOR_TRACEPOINTS_H

#include <lttng/tracepoint.h>

LTTNG_UST_TRACEPOINT_EVENT(
    // Tracepoint provider name
    task_annotator,

    // Tracepoint/event name
    event,

    // Tracepoint arguments (input)
    LTTNG_UST_TP_ARGS(
        const char *, id,
        const char *, text
    ),

    // Tracepoint/event fields (output)
    LTTNG_UST_TP_FIELDS(
        lttng_ust_field_string(id, id)
        lttng_ust_field_string(message, text)
    )
)

#endif /* TASK_ANNOTATOR_TRACEPOINTS_H */

#include <lttng/tracepoint-event.h>
