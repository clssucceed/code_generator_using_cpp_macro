void countEvent(U32 eventId)
{
    switch(eventId)
    {
    case setupEventId:
        g_counter.setupEventCounter++;
        break;
    case cfgEventId:
        g_counter.cfgEventCounter++;
        break;
    case recfgEventId:
        g_counter.recfgEventCounter++;
        break;
    case releaseEventId:
        g_counter.releaseEventCounter++;
        break;
    // ...
    }
}