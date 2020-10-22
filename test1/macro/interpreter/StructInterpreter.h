#define EVENTS_BEGIN(name, id_offset)    struct name##Counter {
#define EVENT(event)                     U32 event##EventCounter;
#define EVENTS_END()                     };