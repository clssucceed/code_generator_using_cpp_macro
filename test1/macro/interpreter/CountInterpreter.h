#define EVENTS_BEGIN(name, id_offset)           \
void count##name(U32 eventId)                   \
{                                               \
    switch(eventId){

#define EVENT(event)                            \
case event##EventId:                            \
    g_counter.event##EventCounter++;            \
    break;

#define EVENTS_END()                       }};