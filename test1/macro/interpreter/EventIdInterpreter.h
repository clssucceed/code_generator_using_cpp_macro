#define EVENTS_BEGIN(name, id_offset)    enum name##Id { name##BaseId = id_offset
#define EVENT(event)                     , event##EventId
#define EVENTS_END()                     };