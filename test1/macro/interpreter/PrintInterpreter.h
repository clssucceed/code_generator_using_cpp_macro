#define EVENTS_BEGIN(name, id_offset)       \
void printCounter() {

#define EVENT(event)                        \
printf(#event"EventCounter = %d \n",   g_counter.event##EventCounter);

#define EVENTS_END()                        };