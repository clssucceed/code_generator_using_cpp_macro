// 分析generated_code中的文件不难发现，每个文件都符合三段式，并且第二段具有相同范式，位移不同的只是标识符的名字中的关键字
EVENTS_BEGIN(Event, 0x4000)
    EVENT(setup)
    EVENT(cfg)
    EVENT(recfg)
    EVENT(release)
EVENTS_END()