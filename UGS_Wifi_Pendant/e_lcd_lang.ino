

//Slovenian language
#ifdef LanguageSlovenian
      #define      lcdLanguage                    "Slovenian"
//LCD Message should only be 16 chars long: "1234567890123456"
      #define      lcdMsgConnecting               "  Povezujem..."
      #define      lcdMsgConnected                "    Povezan!"
      #define      lcdMsgZeroing                  "  Iscem niclo"
      #define      lcdMsgOfSystem                 "    sistema"
      #define      lcdMsgProbingZ                 "  Sondiram Z os"
      #define      lcdMsgResetXYZ                 " Resetiraj XYZ"
      #define      lcdMsgWorkingAxis              "  delavne osi"
      #define      lcdMsgResetZ                   "  Resetiraj Z"
      #define      lcdMsgWorkingAxis2             "   delavno os"
      #define      lcdMsgPause                    "     Pavza"
      #define      lcdMsgResetAlarm               "Resetiraj alarm"
      #define      lcdMsgCancel                   "    Preklici"
      #define      lcdMsgResetSystem              "   Resetiraj"
      #define      lcdMsgArduino                  "    Arduino"
      #define      lcdMsgContinue                 "    Nadaljuj"
      #define      lcdMsgStartaJob                " Pricni z delom"
      #define      lcdMsgMoveYback                "Premik Y nazaj"
      #define      lcdMsgReturnToXYzero           "Pojdi na XY nulo"
      #define      lcdMsgReturnToZzero            "Pojdi na Z nulo"
      #define      lcdMsgFYminus                  "    --> Y -"
      #define      lcdMsgSYminus                  " pocasi --> Y-"
      #define      lcdMsgMoveYforward             "Premik Y naprej"
      #define      lcdMsgFYplus                   "    --> Y +"
      #define      lcdMsgSYplus                   " pocasi --> Y+"
      #define      lcdMsgMoveXLeft                " Premik X levo"
      #define      lcdMsgFXminus                  "    --> X -"
      #define      lcdMsgSXminus                  " pocasi --> X-"
      #define      lcdMsgMoveYRight               " Premik X desno"
      #define      lcdMsgFXplus                   "    --> X +"
      #define      lcdMsgSXplus                   " pocasi --> X+"
      #define      lcdMsgMoveZdown                "  Premik Z dol"
      #define      lcdMsgFZminus                  "    --> Z -"
      #define      lcdMsgSZminus                  " pocasi --> Z-"
      #define      lcdMsgMoveZup                  "  Premik Z gor"
      #define      lcdMsgFZplus                   "    --> Z +"
      #define      lcdMsgSZplus                   " pocasi --> Z+"
      #define      lcdMsgCNCjobButton             " CNC Dela, gumb"
      #define      lcdMsgIsDisabled               " je onemogocen!"
      #define      lcdMsgErrorW                   "   Napaka pri"
      #define      lcdMsgEProbingZ                "sondiranju Z osi"
      #define      lcdMsgNoConn                   "  Ni povezave"
      #define      lcdMsgToInternet               " z internetom!"
      #define      lcdMsgNAvailable               "  ni dosegljiv"
      #define      lcdMsgTurnOnUGS                " Prizgi UGS ali"
      #define      lcdMsgEnablePendant            "omogoci pendant"
      #define      lcdMsgCNCNotConnected          " CNC ni povezan"
      #define      lcdMsgToComputer               " z racunalnikom"
      #define      lcdMsgAlarmLimit               " ALARM!   (RST)"
      #define      lcdMsgLimitTriggered           " SPROZEN LIMIT!"
      #define      lcdMsgAlarm                    " ALARM!    ($X)"
      #define      lcdMsgGeneralError             " SPLOSNA NAPAKA"
      #define      lcdMsgWorkX                    "Delavna razd. X:"
      #define      lcdMsgWorkY                    "Delavna razd. Y:"
      #define      lcdMsgWorkZ                    "Delavna razd. Z:"
      #define      lcdMsgAbsX                     "Absolutna razd X"
      #define      lcdMsgAbsY                     "Absolutna razd Y"
      #define      lcdMsgAbsZ                     "Absolutna razd Z"
      #define      lcdMsgFile                     "Izbrana datoteka"
      #define      lcdMsgWaiting                  "    Cakam na"
      #define      lcdMsgMakingMeW                "      delo"
      #define      lcdMsgJogging                  "  Premikam..."
      #define      lcdMsgSleeping                 "V hibernaciji..."
      #define      lcdMsgAllR                     "St vrstic v dat."
      #define      lcdMsgSentR                    "St poslanih vrst"
      #define      lcdMsgRemainingR               "Preostalih vrst:"
      #define      lcdMsgRemainingT               "Preostali cas:"
      #define      lcdMsgCantTell                 "Nemogoce oceniti"
      #define      lcdMsgDuration                 " Cas trajanja:"
      #define      lcdMsgWorking                  "     DELA!"
      #define      lcdMsgCNCIs                    "  CNC TRENUTNO"
      #define      lcdMsgCurrPause                "   NA PAVZI!"
      #define      lcdMsgProgress                 "    Progres:"
      #define      lcdMsgSomethingWentWrong       "Nekaj je narobe"
      #define      lcdMsgIDK                      "...ne vem..."
      //For ifttt messages, spaces should be replaced with %20. And ascii characters only!
      #define      iftttMessageSleeping           "CNC%20v%20hibernaciji,%20delo%20koncano."
      #define      iftttMessageHardAlarm          "CNC%20delo%20prekinjeno,%20NAPAKA:%20limit%20sprozen!"
      #define      iftttMessageGeneralAlarm       "CNC%20delo%20prekinjeno,%20NAPAKA:%20splosna%20napaka!"
      #define      iftttMessageIdle               "CNC%20v%20pripravljenosti,%20delo%20koncano."
      #define      iftttMessageDisconnected       "CNC%20delo%20prekinjeno,%20NAPAKA:%20CNC%20nedosegljiv!"
#endif

#ifdef LanguageEnglish
      #define      lcdLanguage                    "English"
//LCD Message should only be 16 chars long: "1234567890123456"
      #define      lcdMsgConnecting               " Connecting..."
      #define      lcdMsgConnected                "   Connected!"
      #define      lcdMsgZeroing                  "    Zeroing"
      #define      lcdMsgOfSystem                 "     system"
      #define      lcdMsgProbingZ                 " Probing Z axis"
      #define      lcdMsgResetXYZ                 "  Reseting XYZ"
      #define      lcdMsgWorkingAxis              "  working axis"
      #define      lcdMsgResetZ                   "  Resetting Z"
      #define      lcdMsgWorkingAxis2             "  working axis"
      #define      lcdMsgPause                    "     Pause"
      #define      lcdMsgResetAlarm               "  Reset alarm"
      #define      lcdMsgCancel                   "     Cancel"
      #define      lcdMsgResetSystem              "     Reset"
      #define      lcdMsgArduino                  "    Arduino"
      #define      lcdMsgContinue                 "    Continue"
      #define      lcdMsgStartaJob                "  Start a job"
      #define      lcdMsgReturnToXYzero           "Back to XY zero"
      #define      lcdMsgReturnToZzero            "Back to Z zero"
      #define      lcdMsgMoveYback                "  Move Y back"
      #define      lcdMsgFYminus                  "    --> Y -"
      #define      lcdMsgSYminus                  " slowly --> Y-"
      #define      lcdMsgMoveYforward             " Move Y forwards"
      #define      lcdMsgFYplus                   "    --> Y +"
      #define      lcdMsgSYplus                   " slowly --> Y+"
      #define      lcdMsgMoveXLeft                "  Move X left"
      #define      lcdMsgFXminus                  "    --> X -"
      #define      lcdMsgSXminus                  " slowly --> X-"
      #define      lcdMsgMoveYRight               "  Move X right"
      #define      lcdMsgFXplus                   "    --> X +"
      #define      lcdMsgSXplus                   " slowly --> X+"
      #define      lcdMsgMoveZdown                "  Move Z down"
      #define      lcdMsgFZminus                  "    --> Z -"
      #define      lcdMsgSZminus                  " slowly --> Z-"
      #define      lcdMsgMoveZup                  "   Move Z up"
      #define      lcdMsgFZplus                   "    --> Z +"
      #define      lcdMsgSZplus                   " slowly --> Z+"
      #define      lcdMsgCNCjobButton             "CNC working, btn"
      #define      lcdMsgIsDisabled               "  is disabled!"
      #define      lcdMsgErrorW                   "   Error when"
      #define      lcdMsgEProbingZ                " probing Z axis"
      #define      lcdMsgNoConn                   " No connection"
      #define      lcdMsgToInternet               "to the internet!"
      #define      lcdMsgNAvailable               " not available"
      #define      lcdMsgTurnOnUGS                " Turn on UGS or"
      #define      lcdMsgEnablePendant            " enable pendant"
      #define      lcdMsgCNCNotConnected          "CNC not connectd"
      #define      lcdMsgToComputer               "to  the computer"
      #define      lcdMsgAlarmLimit               " ALARM!   (RST)"
      #define      lcdMsgLimitTriggered           "  HARD LIMIT!"
      #define      lcdMsgAlarm                    " ALARM!    ($X)"
      #define      lcdMsgGeneralError             " GENERAL ERROR"
      #define      lcdMsgWorkX                    "Working dist. X:"
      #define      lcdMsgWorkY                    "Working dist. Y:"
      #define      lcdMsgWorkZ                    "Working dist. Z:"
      #define      lcdMsgAbsX                     "Absolute dist. X"
      #define      lcdMsgAbsY                     "Absolute dist. Y"
      #define      lcdMsgAbsZ                     "Absolute dist. Z"
      #define      lcdMsgFile                     "     File:"
      #define      lcdMsgWaiting                  "  Waiting for"
      #define      lcdMsgMakingMeW                " making me work"
      #define      lcdMsgJogging                  "   Jogging..."
      #define      lcdMsgSleeping                 "  Sleeping..."
      #define      lcdMsgAllR                     "    All rows"
      #define      lcdMsgSentR                    "   Sent rows"
      #define      lcdMsgRemainingR               "Remainging rows:"
      #define      lcdMsgRemainingT               "Remaining time:"
      #define      lcdMsgCantTell                 "    Cant tell"
      #define      lcdMsgDuration                 "   Duration:"
      #define      lcdMsgWorking                  "    WORKING!"
      #define      lcdMsgCNCIs                    "CNC IS CURRENTLY"
      #define      lcdMsgCurrPause                "   PAUSED!"
      #define      lcdMsgProgress                 "   Progress:"
      #define      lcdMsgSomethingWentWrong       "Something wrong"
      #define      lcdMsgIDK                      " ...IDK what..."
      //For ifttt messages, spaces should be replaced with %20. And ascii characters only!
      #define      iftttMessageSleeping           "CNC%20sleeping,%20job%20finished."
      #define      iftttMessageHardAlarm          "CNC%20job%20aborted,%20ERROR:%20hard%20limit%20triggered!"
      #define      iftttMessageGeneralAlarm       "CNC%20job%20aborted,%20ERROR:%20general%20error!"
      #define      iftttMessageIdle               "CNC%20idle,%20job%20finished."
      #define      iftttMessageDisconnected       "CNC%20job%20aborted,%20ERROR:%20CNC%20disconnected!"
#endif
