// 菜单项
const uint8_t language_types = 3;
//                                            "温控类型",   "溫控類型",   "Control Type",

const char *SetupItems[][language_types] = { "菜单设置", "Settings", "Настройки",
                                             "烙铁头设置", "Tip", "Жало",
                                             "温度设置", "Thermal-profile", "Термопрофиль",
                                             "时间设置", "Timers", "Таймеры",
                                             "主屏幕", "Main Screen", "Основной экран",
                                             "信息", "Control Info", "Системная инфо",
                                             "电压设置", "Power supply", "Питание",
                                             "QC", "QC", "QC",
                                             "蜂鸣器", "Buzzer", "Пищалка",
                                             "恢复默认设置", "Load defaults", "Сброс конфига",
                                             "更新版本", "FW Upgrade", "Обновление",
                                             "Languages", "Languages", "Языки",
                                             "PID", "PID", "Терморегулятор",
                                             "切换左右手", "Flip Screen", "Смена руки",
                                             "返回", "Back", "Назад" };
const char *LanguagesItems[][language_types] = { "Languages", "Languages", "Языки",
                                                 "简体中文", "Chineese", "Китайский",
                                                 "英语", "English", "Английский",
                                                 "Russian", "Russian", "Русский" };
const char *TipItems[][language_types] = { "烙铁头:", "Tip:", "Жало:",
                                           "更换烙铁头", "Tip Change", "Смена жала",
                                           "校准烙铁头", "Calibration", "Калибровка",
                                           "重命名烙铁头", "Rename", "Переименовать",
                                           "删除烙铁头", "Delete Tip", "Удалить жало",
                                           "新建烙铁头", "New Tip", "Новое жало",
                                           "返回", "Back", "Назад" };
const char *TempItems[][language_types] = { "温度设置", "Thermo-profile", "Термопрофиль",
                                            "默认温度", "Base temp", "Темп. базовая",
                                            "休眠温度", "Sleep temp", "Темп. сна",
                                            "提高温度", "Boost temp", "Темп. буста",
                                            "返回", "Back", "Назад" };
const char *TimerItems[][language_types] = { "时间设置", "Timers", "Таймеры",
                                             "休眠时间", "Sleep timer", "Таймер сна",
                                             "关闭时间", "P/Off timer", "Таймер выкл.",
                                             "提温时间", "Boost timer", "Таймер буста",
                                             "唤醒阈值", "Wake-up threshold", "Порог пробуждения",
                                             "返回", "Back", "Назад" };
const char *ControlTypeItems[][language_types] = { "温控类型", "Temperature control type", "Терморегулятор",
                                                   "非PID", "Non-PID", "Не PID",
                                                   "PID", "PID", "PID" };
const char *MainScreenItems[][language_types] = { "主屏幕",  "Main Screen", "Главный экран",
                                                  "大数字", "Icons", "Иконки",
                                                "更多信息", "Info", "Информация" };
const char *StoreItems[][language_types] = { "存储设置?", "Save?", "Сохранить?",
                                             "否", "No", "Нет",
                                             "是", "Yes", "Да" };
const char *DefaultItems[][language_types] = { "恢复设置?", "Restore?", "Восстановить?",
                                               "否", "No", "Нет",
                                               "是", "Yes", "Да" };
const char *SureItems[][language_types] = { "确定?", "Sure?", "Точно?",
                                            "否", "No", "Нет",
                                            "是", "Yes", "Да" };
const char *VoltageItems[][language_types] = { "电压设置", "Input voltage", "Вольтаж питания",
                                               "9V", "9V", "9V",
                                               "12V", "12V", "12V",
                                               "15V", "15V", "15V",
                                               "20V(50%)", "20V(50%)", "20V(50%)",
                                               "20V(100%)", "20V(100%)", "20V(100%)"};
const char *QCItems[][language_types] = { "QC", "QC", "QC",
                                          "禁用", "Off", "Выключено",
                                          "启用", "On", "Включено" };
const char *BuzzerItems[][language_types] = { "蜂鸣器", "Buzzer", "Пищалка",
                                              "禁用", "Off", "Выключено",
                                              "启用", "On", "Включено" };
const char *DefaultTempItems[][language_types] = { "默认温度", "Base temp", "Темп. базовая",
                                                   "deg C", "deg C", "град C" };
const char *SleepTempItems[][language_types] = { "休眠温度", "Sleep temp", "Темп. сна",
                                                 "deg C", "deg C", "град C" };
const char *BoostTempItems[][language_types] = { "提高温度", "Boost temp", "Темп. буста",
                                                 "deg C", "deg C", "град C" };
const char *SleepTimerItems[][language_types] = { "休眠时间", "Sleep timer", "Таймер сна",
                                                  "秒", "sec", "сек" };
const char *WAKEUPthresholdItems[][language_types] = { "唤醒阈值", "Wake-up treshold", "Порог пробуждения",
                                                       "mg", "mg", "мг" };
const char *OffTimerItems[][language_types] = { "关闭时间", "Power off in", "До выключения",
                                                "分钟", "min", "мин" };
const char *BoostTimerItems[][language_types] = { "提温时间", "Boost timer", "Время буста",
                                                  "秒", "sec", "сек" };
const char *DeleteMessage[][language_types] = { "警告", "Warning", "Внимание",
                                                "你不能", "You can`t", "Вы не можете",
                                                "删除你的", "delete your", "удалить свое",
                                                "最后的烙铁头!", "last tip!", "последнее жало!" };
const char *MaxTipMessage[][language_types] = { "警告", "Warning", "Внимание",
                                                "你已达", "You reached", "Вы достигли",
                                                "最大数量", "max number of", "максимального кол-ва",
                                                "的烙铁头!", "stored tips!", "сохраненных жал!" };

const char *txt_set_temp[] = { "设温:", "SET:", "→" };
const char *txt_error[] = { "错误", "ERROR", "ОШИБКА" };
const char *txt_off[] = { "关闭", "OFF", "ВЫКЛ" };
const char *txt_sleep[] = { "休眠", "SLEEP", "СОН" };
const char *txt_boost[] = { "提温", "BOOST", "БУСТ" };
const char *txt_worky[] = { "工作", "WORK", "ПАЙКА" };
const char *txt_on[] = { "加热", "HEATING", "НАГРЕВ" };
const char *txt_hold[] = { "保持", "HOLD", "УДЕРЖАНИЕ" };

const char *txt_Deactivated[] = { "禁用", "Deactivated", "Деактивировано" };

const char *txt_temp[] = { "温度:", "Chip temp:", "ESP temp: " };
const char *txt_voltage[] = { "电压:", "Vin: ", "Vin: " };
const char *txt_Version[] = { "版本:", "FW: ", "FW: " };

const char *txt_select_tip[] = { "选择烙铁头", "Tip select", "Выбор жала" };

const char *txt_calibrate[] = { "校准", "Calibrate", "Калибровка" };
const char *txt_step[] = { "步进", "Step", "Шаг" };
const char *txt_set_measured[] = { "设为测量", "Set measured", "Тюн " };
const char *txt_s_temp[] = { "的温度:", "Temp:", "Темп:" };
const char *txt_temp_2[] = { "温度：  ", "Temp：  ", "Темп:  " };
const char *txt_wait_pls[] = { "请稍等...", "Wait...", "Ждите..." };

const char *txt_enter_tip_name[] = { "输入烙铁头名称", "Enter tip name", "Введите название жала" };

const char *txt_message[] = {"直肠密码分析仪", "Mode", "Режим "};
