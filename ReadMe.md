# galImage2Ascii

## Options

| Switch             | Description                                    |
|:------------------ |:---------------------------------------------- |
| -u or -usage       | Print usage                                    |
| -w or -width       | use [-w value] or [-width value] to specify output width (>0)            |
| -h or -height      | use [-h value] or [-height value] to specify output height (>0)          |
| -t or -threshold   | use [-t value] or [-threshold value] to specify the threshold (0~1)      |
| -i or -invert      | add [-i] or [-invert] to set invert                                      |

## Samples

default: ./galImage2AsciiExec -p 9.jpg (100x100)
```text
###@########@@@@@@@@@@@@@@@@@@@@%::::::i@@@@@@@@@@@@@@@@@@@@@@@@##@#################################
@@#@@#####@@@@@@@@@@@@@@@@@@@$@@,,:::,,:;;it@@@@@@@@@@@@@@@@@@@@###@######@@###########@########@@##
@@@@@###@@@@@@@@@@@@@@@@@@@@@@@@::::::::::;;iiX@@@##@@@@@@@@@@@######@@#########@@##@###@@#######@##
@###@#####@#####@@@@@@@@@@@@@@@%;::;;;;;;i;;iiitt@@@#@@@@@@@@@@@@@######################@@#######@@@
@#@@@######@######@@@@@@@@@@@@@:::::::;;;;i;iii;;iX@@@@@##@@@#@@@@@@#@@######@@#########@@########@#
####################@@@@@@@@@@@:::::::;:;;;i;;;;iiii@@@###@@@@#@@@@@##@@####@#######################
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:;:::::::;;i;iiiitii;i;@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@########@@@@@@@@@%;i;;:::;;;;;;;;iiii;iiii@@@@@@@@@$%i;ii;i;it$@@@@@@@@@@@@@@@@@@@@@@@@
@@#@@#@@@#@@@@@######@@@@@@@@@:ii;,;;;;;;;i;;;iitttiii;:;tt@ti;;ti;;iiiii;ii;;:%@@@@####@@@#########
@@##@##@##@@@###@@##@@@@@@@@@$::;;;;;,,,:;:::;:t%tttt;,iii;;$Xti$$i;:;;iii;;;;;;;:i@@@@@@@@@#@@#@@##
@@@@####@@@@@@####@###@@@@@@@,,:;;i:,iiiiiitt%t%iiiiitttii::X%%;XXX:tii;::;;;;;:::;::X@@@@@@@@@#####
@@@@####@@@$@@#@#@#@@@@#@@@@@,,;;:;:tX%ttttit;:;;;itittttti;;@XXXXXX;ttti;::;;;:::::,::i@@#@@@@###@@
@@#@#@@###@@@@##@##@#@#@#@@@i,,,:;;$i%%Xi;%iti%%%t%%%ttt%%%t;;$XiXXXtit,iii;;::;:::::::,:i@@@@@@@###
@@#@@@@#@@@@@@@@@@@@@@@@@@@@:,,,tXtXX%$%i%XXXX%t%%%%%%%t%t%%tii%$XX%tXXii%$Xi;;:::,:::::,,:X@@@@@@@@
@@#@@###@@@@@@@#@@@@@##@#@@@,,,%$%XXXXit%XXXXXXXtXX%XX%%t%t%%tit$t%tX$$i:XXXX;;:,,,:,,:::,,,:@@@@@@@
@@@@@###@@@#@@@@@@@@###@@@@:,:%X$$$$$t%%%$XXXXXX$tXXXXXX%%%%%%%;ti%%$$XX%XXXXi;;;:,::,:::,,,,:@@@@@@
@@@@@##@@@@@@#@#@@@@######@:::$$$$$$$X$XX$X$XX$X$$XXXX%XX%%%%%%itt%X%$X%%XXXXi;;:::,,,,,,,,,,X@@@@@@
@@@@@@@@@@@@@@@@@@@@#@@@#@@t;X$$$$$$XXXXX$$$$XXX$$XXXXX%XX%%%%%;itt%%$$tt%%%%:,:;;::,,,,,,,,@@@@@@@@
@@@@######@@#@@@#######@@@@i@X$$$@$$X$$$$$$$$$X$$$XXXXXXXX%X%%%iii%X$%;ttt%%:.;,:::::,,,,,t@@@@@@@@@
@@@@#########@@@@@@@@@@@@@@XX$@@$$$XX$$$X$$$$$$X$$$XX$XXXXXX%X%%iiX%$$XiX;i%X:::,,,,,:,,,@@@@@@@@@@@
@@@#@##@@@@@#@@@#@@@@@@@@@$@X@$$$$$$$$X$X$$X$$$$XX$$X$X$XXX%X%X%tiit$@$%tX%XXXi:::,,,:,,@@@@@@@@@@@@
@@@@@##@@@@@@@@@@@@@@@@@@@X$X$$$$$$X$@$$$$$$$$$$$X$XXX$XXXXXXX%%Xtitt$$XXtXtX%%t:::,,,,@@@@@@@@@@@@@
@@@#@##@@#@@@@@@@@@@@@@@@@$%@$$$$$$$$$X$$X$$$$$$$$$$$$XXXXXXXX%%%%%%%%iXX%%%tt:Xt::::,@@@@@@@@@@@@@@
@@@##@@@@@@@@@@@@@@@@@@@XX$%X$$$$$$$$$X$$X$$$$$$$$X$$$XXXXXXXXX%XXt%%tX$Xti%tii,,,:::@@@@@@@@@@@@@@@
@@@@#@@@@@@@@@@@@@@@@@@$$$$$X$$$$$$$$XX$$$X$$$$$$$$$$$XXXXXXXXX%%%Xt%%t%tt;%tt%t,,i,%@@#@@@@@@@@@@@@
@@@@###@@@@@@@@@@@@@@@XXtX$XX$$$$X$$$$$$X$$X$$$X$$XX$$$XXXXXXX%X%%X%t%%%%t%tttX%;,,.@@@@@@@@@@@@@@@@
@@@@####@@@@@@@@@@@@@X%XtX$XXX$$$X$$$$$$X$$$$$X$$$$XXX$XXXXXXX%%t%%X%tti;ittttt%%,,.@@@@$@@@@@@@@@@@
@@@@####@@@@@@@@@@@@X$X%tX$XX$$X$%$$$$$XX$$XXXXXXXXXXXXXXXXXXX%%X%%X%%;;;ii%%%%%:,,$@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@X@iXXtX$XXX$X$X$$$$$$XX$$XX$XXXXXXXXXX%XXXXXtXtX%%Xt;tittiit;,::@@@@@@@@@@@@@@@@@
@@@@#@@@@@@@@@@@@@X@,%XX%XXXXXXX$X$$$X$$X%$XXXX$XXXXX%$$XXXXXX%%t%XXX;i%%t%tti;;;;tti@$@@@@@@@$@@@@@
@@@@@#@@@@@@@@@@@X@:t%%X%XX%X$X$XX$$XX$XX%XXXXXXXXXXXXXXXX%XXXX%%%tXXitittX%iiiiiittiiii@@@@@@@@@@@@
@@@$@#@#@@@@###@%@,,t%XX%XX%XX$XXX$$XX$$$X%$X$XXXXXXXX%XXXXX%XXX%tt%tt%ttX%%X;tiitttiiiiiX@@@@@@$@@@
@@@@@@@#@@@@@@@@@;,%XtXXtXX%XX$XXX$$XXXXXXtXXXXXXXXXXXXXXXXXXXX%X%%%%ittii%%%t;i;tttttiiiiit@@@@@$@@
@@@@@@@@@@@@@$@$;,,%%%%X%XXXXX$XXXX$XXXX$XtXXXXXXXXXXXX%XXXXXXXXX%ttX%;;iiitititittiti%@Xt%iittt%%it
@@@@@@@@@@@X$@t:,,%t%%X%%XXXXXXXXt$$XXXXXXXtXXXXXXXXXXXX%XXXXXXXXX%t%%i:iti;%%%,tittiiit$@@X$@@@@$@@
@@@@@@$itt@@$t;::i%ttXX%%XXXXXXXXtXXXXXXXXX%XXXXXXXXXXXX%XXXXXXXXXXX%%%ttt%t%%t;:;itt;;iX$@@@@@@@@@@
@@@@@@@@@@$%ti;i:%iXtXX%t%XXXX$XXXXXXXXXXXX%XXXXXXXXXX%%X%XX%XXXXXX%%XXXXXt%XX%t,;itttiti@X@@@@@@@@@
@@@@@@X%%%%%iit;%tiXtXX%t%XXXXXX%X%%XXXXXXXX$XXXXXXXXXXXX%XXX%XXXXXX%%XXX%X%%%%tt,tittii%t@@@@@@@@@@
@@@@@@@@tt%titi%iittiXX%t%XXXXXXXXt%XX%XXXXX$$%XXXX$XXXXXX%%X%XXXXXXXtX%XX%t%%%tt,ttittt;%%@@@@@@@@@
@@@@@@@@@$t%%iiit:itiX%%t%XXXXXXXXX%XX%XXXXXX$$XX$$XXXX%Xt%it%%%XXXXXXtXXX%XX%%%t%tti:iti%@XX@@@$@@@
@@@@@@$@@@$%iiiiiit%$@$%%t%XX%XXXXitXX%%XX%%X$@XX%XXX%%%;i:::iiitX%XXX%tXXXX%%%%t%ttt,;ttt@@X@@@$$@@
@@@@@@@@@@@ttitiiit%@$%%XXXXXtX%XX%%tttttt%t%$@@X%XXXX;:i,,,,,t,t%X%ttXt%tXXX%t%t%tti.,:;t$@%$$@@@$@
@@@@@@@@@$%$i;;;;t%%t%%X%XX%XXXX%ttii;..,,%$$%@@@@$$XX:,::,,:;i.tt%itttitt%XX%%%%;%ti;,,i;ii@@$@@@@@
@@@@@@@@@@@@iii;:ittt%t%%%tX%XXX%ii, ::,,.;$@@$@@@@@@@%;t%i;it%;tXX%tXXtt%XXXX%tttttt;:,,t;i:;@%@@@@
@@@@@@@@@@@@Xii;i;tti%t%%%X%%X;%%tit,,,,.:,X@@@@@@@@@@@@t$XX%:ittX%XtXX%ttXXXX%Xttt%itii:i,;i::it@@@
@@@@@@@@@@@@@ii;;;tti%t%X%XXXX%%%%it:ii;:%,@@@@@@@@@@@@@@XXtt%t%i%tX%XX%%ttX%tX%Xtttitti:t;::;;:;;iX
@@@@@@@@@@@@@@;i;;iii%;t%%%%%%Xt;%%i%:$%$$X@@@@@@@@@@@@@@@$$$$XXtitX%XX%%%XtXX%t%%%tt:;;itti;:;;;:;@
@@@@@@@@@@@@@@XXi;i;itit%i%%XXX$%t%%t%;ttX@@@@@@@$@@@@@@@@@$$$$itt%t%XXXX%%t%t%%%ii%%iiii,ii;;:::;$@
$@@@@@@@@X@@@@@%t:ii:tt%%t%%%%Xt%%%%%tX$@@@@@@@@@@@@@@@@@@@@@$$iXt%i%XXXX%%%X%t%%%%i;%%t;;:i;:::it@@
$$@@@@@@@$$@@X@$tXit;titi%t%%X%Xt%%%%%%$@@@@@@@@@@@@@@@@@@@@@@%t@itt%tX%X%X%%%;it%%tiit%;i;:;;:;,X@@
@@$@@@@@@$@@%@tX%;;tiiit%ttt%%%X%itt%%$t@@@@@@@@@@@@@@@@@@@@@@i$$%tit%XXXiX$%t%;it%%%i::iti;;:;:%$%@
$@@$@@@@@$@$@@i;titii;i;tt;ttXtX%%%Xi;%$@$@@@@@@@@@@@@@@@@@@@X@X$ttiXXXXX$%Xit;t%%t%t;;t:i;i:;;t@@@@
@@$@$@@@@$$@@i@@$XXitti;ttitt$Xt%%%$%%X%X$@@@@@@@@@@@@@@@@@@$@@$t@@ttXXX%%@$%t%;itt:%ti;tti;t%@@@@@t
@X@@@@X@@@@$Xi@@%t@%iiiiit;tt$X$t%%%@X%X$@@@@@@$@@@@@@@@@@@$@@@$@$@t%%XXXX@@Xttiiiiit;;ti;iiit@@@@@@
@@@@@@@X@@%@@t@@i@@%ti%:;ii%t%$$$%%%%X%%$@@@@@@@@@@@@@@@@@X@@@@@$@@%$tXXXXX$@tti;ii;;tiiit;i;iX@@@@@
@@$@@@$$$@i@@$@$$@$:ii%tiiiiii%X$$$%%%%%%X$$@@@@@@@@@@@@@$$@$@@@$@@%XXXXXt$XXt%itiiti:;%%ii:i;t@@@@@
@@@@@@@@$X;%@@@@X@tiit;tit;::i@%%$X$%%%%ti$%$@@@@@@@@@@;i$$$$$@@@@$t$%XX%%$XXiitttiii;:;t%i;iiit@@@@
@@@@@@@@@X:i%@$$$$Xttttiiti:;t$@$X$$$%t%%tt$$%i$@@@@@t%t%$X$%X@@$$t$$tX%t%XXX%tiiittiii;itii;iit@@@@
@@@@$@@@@%ii%$X$$$X%;tt;;itt%;@t@$@@$$$$$%tX$XXtttitt%%XX$%XX$X$$@$$$%XXXXX%$tX%tiiiiti;;;%i:tti%@@@
@@@$@$@$%iti%i%$$$%XXXXi;:ti@$@X@%$$$$@$@$tt%%$$$%%%%XX$$$X%%XXX$@@$XX%%tXX%%$i%%%ti:i%t;it;itti%@@@
@@@@$X@XitittttXXX%$$$t%%;t%t@@@@@@@@@@@@@@$tX:X$XX%%XXt,$Xt@$XXXX@@Xt%%%X$%%t%it%tX%;t%t;itttttt@@@
@@@@%XXtiii%itX@X$@@$tt%t;;%Xi@@@$XXXX$@$$;;%.,:i.,,....,X$%X$XXXXXX$@%%%t@@X%;;tii%%tttttiiiiitiX@@
@@@@@%t%@$$X$$@X@$@$@@$i$%iXii@$@$@@@@XXtX%:X$i:;:,,,.,.t%$$%X$X%$t$@@@$%%X@@@X;;;%XXXX%%tiiiitttt%t
@@@@$ii$@@@$@$X@@$@@$@$;%XtXX%%@@@@@@@@@$t%%;X$$$t,%%XXX%%i:@%@tXX$X$$@@@@%X@@@@@@@@@@@@@%;;;iiit%t@
@@@@@@$X$@@$@%@$$@@@@X$it%tXXtt@@@@@@@@@@@@%ti%$$$XX$$$$X%tt$t$$XX@@%@@@@@@X@@@@@@@@@@@@@$@$$$@Xtt@@
@@@@@@%@$$$X$@$@@@@@@%$t%%ttiX$@@@@@@@@@@$@%$X%t%$XX$XXXXX%XX$$$X%%@@@@@@@@@@@@@@@@@@@@@@$@X$@@%%$%@
@@@@@@@%@$X$$X@@@@@@@$%%%%%%tXX@@@@@@@@@@@@$@X@$%t%X$XXXX%X%XXXXt%%$X$@@@@@@@#@@@@@@@@@XX$$@@@%X@$$$
@@@@@@@$X$t%@@@X$@@@@%i,;;;@X%X@@@@$@@@@@@@@@@$X@@it;;XX%XXX%%:,t$@@@@$@@@@@@@##@@@@@tXX$$$@%%X@@$$$
@$@@@@@@$$$X@@$@$%%;X,i,i%%$tX%@@@@X@@@@$@@@@@@@$@Xt%X,ttt%i,,,:%$$@@@@$@@@#@@@@@@@%X$@@$$$XXX@@@$$$
$$$@$@@@@@$@@@@$$$%%i:,:tXXi%XX$@@@$@@@@$@@@::;:;;i:;,.,i:,::,,$$@@@@@@@$@#@#@@@@X$X@@@$$$$X$@@@@@$$
$@$@@@@@@@@X@@@@$$@X@i@t,%X;X%$X@@@@@@@@@@$t,:::;:::,::,,,:::,X%%@@@@@@@@$@@@@@X$X@@@$@$$$$$@@@@@@$$
$$@@@@@@@@@@X$@@@$$%XtXi%%XiXX$X@$@@@@@$@@$%,::::;:;::::,::;:X%ttX@$@@@@@$@@@t$@@@$$@$@$$$$@@@@@@@@$
$@@@@@@@###@@X$@$@$%:XXX:%X%t$$X$$@@@@@X@@$X,::,,;i;,,:;:,;:tttii%@@$@@@@$$$X$@@@@$$@@@$$X@@@@@@@@@$
@$@@@@@@@@##@@X$$@$t@$$@,%%%%$$X$X$@@@$X@@$$:::;;;i,,:ii:;:..iiiii@@@$@@@@$X$@@$$$@@$$$$X@@@@@@@@@@@
@@@@@@@@@@@#@@@$$X$X@@i;;$%%;X$X$X$@@$X@@@$t,::;;;,:;;;t,::;:,,:;;$@$@$@@@@$%@@@$XX$$$Xt@@@@@@@@@@@@
@@@@@@@###@@@@@@@XXX@X:i:X$;%i$X$XX@$X$@@$$t,,,:,.:;i;t%,i;;;:,,,i%@@@@@@@@@@$@@$$$$X$@@@@@@@@@@@@@@
###@@@@@##@@@@@@@@@$;,,..::,tttX$$XX$$X$@X$t,::,.,;i;,t;i,i;:;;,,iX$$@@@$@@@@X%@$XX$@@@@@@@@@@@@@@@@
@@@@$@@@@@@@@@@@@@X%X$$t:,t;iX;t%XXXX@$$%X$;,:,.,;;:;t,:,t;;;;:;;;:%$$@X@$@@@@$i$@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@#@@@$$$$$it;:$ii%%XXX$@X%XXit::,:::;;;t,;it:;:;;:;;;%X$@@$@@@$$$$$@@@@@@@@@@@@@@@@@@@
@@@@@@@@t$$X$@@@@@$%$$t$$t$i:titiit%$$$$t%%ii.:::;:;i%X$$%%;;:;;;;i,%@@@@@@@@$$$$X@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@$$$$$@@@$X@tXi%%i%ittXX$$$$$%%,i::;;:;it@$$XXt;::::tttt$@@$$@@@@$$%%t$@@@@@@@@@@@@@@@$
@@@$@@@@@@@@@@$$X$$@@@@@@X$$i%t$:i%%X$X$%tXtti:::;::i;@%@$%X;:::i%%@@X@$$$$@@@$$$t%tt@@@@@@@@@@@@@@$
@X$@@@@@@@@@$$$$$X@@$@@@@$%t$$i$t:%%$$%Xt$$$$;i;:;;;iX@t@@@X;;::tX$X%%$$$%%@@$$$XX%$X%@@@@@@@@@@@@$$
@@@@$@@$$@@@@XX$@X@@@$@@@@@X$$$%%t:i%$$$%X$X$@$$X%t;i$@X@@XXX;ti$$$$$@@@$XX%%%XX%tX%%%;X@@@@@@@@@$$$
Xt%%XX%X$$$$@@$@@$@$@$@@@@@@X$$$$t..t$$Xi%X%X$%$tt$t;$$@@%XX%$X$X%@$$$$tti%%XX$$$X%%t%%%t@@@@@@@@@$$
X$$$$@$@@@@@@@@@$@@$@@@@@@@X$$$$$Xi: ;;iiti%X%XX%X%%$X$@%%;XX%XX%%XtttXt%t;i%%$tti%%tXttt@@@@@@@@@@@
$$$$$@$$@@@@@@@$X@@@$@$@@@@@$@$$$%t:,;;;iiXXX$X$@XXX$X@@@t$XXX@$$@@$@t%X%%ti;%%%%t%t%%%X$@@$$@@@@@@@
$$$$$$$$$$@@@@@X@@@@@@@@@@@@$$$X%Xi.,;:,%XX$@@@@@@@%X@@@@@@%X@@@@@@@@@%@XXX%t%X%%%tittXX@@@$$$$$@@$$
XXXXXX$$$$@@@@@X$@$@$@@@@@$@$$@$$Xi,:;:i%XXX@@@@@@@@@@@@$@@@@@@@@@@@@@X@@@@XtXX%XX%%X%%$@@$$$XX$$$$$
t%%XXXXX$$@@@$@$X$@@@@@@@@$@@$$@$$:.:;iit%XX$$X$@t%@@@@%@@@@$@@@@@$@@@$@@@$@$i%XXX%%t$X@@@$$$%XXX$$$
tttt%t%%X%$$@@X$t$@$@@@@@@@$@@$@$$:,:;,i%%%%Xt$$i%$%$$@;@@X@$@@@@@$@@@$@@@$@@X@X%%$X$%X@@@@@X$XX$$$$
%itttt%%%;,@@X$$%X@$@@$@@@@$@@$@@$ii,:$$;t%t%%@@X$X@ttX,XXX@$$@$@@$$@i@@@$@@$$@@@@X$$@@@@@@@@$$$$$$$
iiitttt%%%i$$.....$@@@@@@$@@$@@$@$;i,,$$$@@$ii;$@Xt$X;i ,t%tt%$$$$$X%:$@$@@@$$%@@@$$$$$@@@@@@@@$@@$$
tiiittt%%$@$t;,,. t@@$@@@@$$@$@$@$:;,:,;%%%$%tttXi%X@@i,:,iiti;iiiXt;:X$$@@$@$%@@@@@$$$XX$XXX%$$$@@@
iiititt%%$X$;,,,,,;$$@@@@@$$@@$$$X;i.,,,X@$$X%%$$%X%X@t:;:..;;:;iii,.t$$$$$$$$t.:@@@@$$$XX%%%XXXX$@@
iiiiitttXXX%t:;:::,%X$@@@$$X$$%@$ii,.,@XX$$$Xtt$$%%$@$iii,.,,::;;::,,iX$@$X$$$t;:$@@$$$XXX%%t%XXXX@@
iiittt%XXXti%$$:::,t@$@$@$$$$$@@$tt.t$$$$$$$XttX$i$$@%tt,$,,.,,::,,,,iXXXX$$$$tt;$$$$$$XX%%%tttt$ttt
%iitttt%%t;X$$$,;;,t%@$@$$$$XX$XXti%$$X$$$$XXXtiXX%%Xi:iX$,t,.,,,....;itXXXXXtti,X@@$$$X%%X%%XXiii;;
%%%tttt%tt%XXX$$;::;%%$$$$$X$$XX%t:$%:XXXXXXX%tii%tttt,tiX%%%i . ....,X,XXXititi,XX$@$XX$XXXttttit%$
X%%%%%%t%t%%XX$$:;;,t%XXXX$$X%$t;ti%%XXXX%%%%t;%XtX%%ti%t%%t%%t;.i:iti::tttttiii,%XX$$$$%%tttiiitii%
```
specify size: ./galImage2AsciiExec -p 9.jpg -w 150 -h 164
```text
########@####@###@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%:::::::::;%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@###@#################################################@
@@@##@@@@#@##@#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,,,,,,,,:::;;;iX@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#####@@@##@@@@@@@@@@@@##@@@@@##############@@@#####@@@
@@@##@@@@####@#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$:,::,:,,:,::;;iiiiX@@@@@@@@@@@@@@@@@@@@@@@@@@@@@####@@@@##@@@@@@@@@@@@##@@@@@#####@@#######@@@##@@@@@@
########@#@#############@@@@@@@@@@@@@@@@@@@@@@@i::::::::::::;;;;;iiit@@@@@@##@@@@@@@@@@@@@@@@@@@####@##@#####@##@#####@##@#####@##@#####@##@##@#####@#
@@@@@@@@@#@#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@::::::::::;;;;;;iiii;iit@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@###@@##@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@#@##@@@#####@##########@@@@@@@@@@@@@@@@@@@@@@@,;:::::;;;;;;;;i;;;itiitit@@@@@@@@@@@@@@@@@@@@@@@@@##############################@###@@@###########@@@#
@#@##@@@#####@############@@@@@@@@@@@@@@@@@@@@$,:::::::;;;;;;;;i;;;;;;;;iiX@@@@@@@@@@@@@@@@@@@@@@@@@@############@@@############@###@@@##########@@@@#
@#@@@@@@#####@##@##########@@@@@@@@@@@@@@@@@@@%:::::::;;;;;;;;iiiiiittii;iii@@@@@@@@##@@@@@@#@@@@@@@@##@@@@@#####@@@@@##########@###@@@##########@@@@@
#######@@@##@@@@@#######@@@#@@@@@@@@@@@@@@@@@@i,::::::;:;;;;;;;;;i;iiiiiti;ii%@@@@##@@@@@@@@@#@@@@@@@@@@@$@#@@@##@@@@@@@@@@@@##@@@@@#######@@@##@@@@@@
#######@@@##@@@@@#######@@@##@@@@@@@@@@@@@@@@@:,:::::::::;;;;;;iiiiiiii;;;i;iii$@@@@@@@@@@@@@#@@@@@@@@@@@#@@@@@##@@@@@@@@@@@@##@@@@@#######@@@##@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@::;:::::::,::;;;;i;iiiiiiitttii;iii@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
###@@@@@@@@@#####@#############@@@@@@@@@@@@@@$;;;;;:::::;;;;;;i;;iiiiiii;;;;tt:ii;@@@@@@@@@@@@@@@@@@$XX%%%%X$$@@@@@@@@@@@@@@@@#@@@@@@@@###############
###@@@@@@@@@@##################@@@@@@@@@@@@@@i;;;;;:::,:;;;;::::::;;itittttti;;;t;;X@@@@@@@@@$ttiiiiiiiii;i;;;;;:;%@@@@@@@@@@@######@@@###############
@@@#@@@#@@@@@##@@@@@#@#########@@@@@@@@@@@@@@:iiii;,,;;;;;;;;;;;;;;;;iiiiiiiiii;:i;:;iXX@$ttt;;;i%;;iiiiiiii;i;ii;;;;;%@@@@@@@######@@@@@#############
@@@#@@@@@@@@@@@@@@@@#@@@@@@@@@@@@@@@@@@@@@@@t:;;;;;;i:;;i;;::::::;::;:::::::,,,:;::iiii:;:i%tttt$$Xittttiii;;i;;i;;;;;;::i$@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@##@@@##@@###@@@@@####@@@##@@@@@@@@@@@@@@@::;:;;;;ti:,,,,,:iiiii;i;i%%tttttttti:,iii:t;;$XX%tt$$$%i;;;;;;;;i;;;;:;;;;;;:::%@@@@@@@@@@@@@@@@@@@@@@@@@
@@@####@@@@#@@@@@@@@@@@@###@@##@@@@@@@@@@@@$,,::;;;;;:,,:itttttttttt%%t%%;itiiittttt;;:::;$X%%%i$$X%ttii;;;;:;;;;;;;;:::;;;;::i@@@@@@@@@@@@@@@@@#####@
@@@@@###@###@@@@@@@@@#@@#@#######@#@@@@@@@@%,,:;;;;;,,i:;%X%%%%%%tii%%tiiiittttttttttti;;:tX%%X;XXXXXtttiii;::::;:;;;;;:::,:::,:;$@@@@@@@@@@@@@####@@#
@@@@@###@###@@@@$@@@@#@@#@##@@@@@@#@@@@@@@@:,,:;;:;;;,tXX%tttttttitt:;;;;;;iititttttttti;;;$XXX%XXXXXi;ittiti;::::;;:;:::::::,::::;$@@@#@@@@@@@####@@#
@@@#@#@@##@@@@@@@@@@#@@@@@##@@#@##@@@@@@@@$,,,::::i,;X$t%%%%;;:t;i:%%%%tt%%t%titt%t%%%ttt;;;X@%%%XXXXtttiiittiii;:::;;:::::::::::,,::$@@@@@@@@@@@@#@@@
@#@#@##@@@#####@@@@@@########@#@##@##@@@@@:,,,,::;ii$i%X$%Xii;:%t%%tit%%%tt%%%%tttt%%%%%%%;;i%$XiXXXXttiit;;iiiii;;;:::;::::::::::,,::i@@@@@@@@@@@####
@@@#@@@@@@##@@@@@@@@@@@@@@@@#@@@@@@@@@@@@@:,,,,,%:X$tXXX%$%i;t%X%XXX%tt%%%%%%%%%%ttt%tt%%%tiitt$XXXXXiitXtiiiitXXi;;;;:,:::,:::::::,,,,:X@@@@@@@@@@##@
@@@#@##@####@@@@@@@@@##@@@@@@##@@@@@#@@@@%:,,,,t:$%%X$XXXtXit%X%%XXXXXXt%%%%%%%%%%%t%%t%%%%iiit%XXX%%%$$X$;;iXXXXX%ii;;::,::::,::::::,,,:;@@@@@@@@@@@@
@@@#@@@@####@@@@@@@@@@#@@@@@@@@@##@##@@@@;,,,,t%$%XX$XXXXiX%%XXXXXXXXXXX%XXX%XX%X%%%t%%t%%%%ii;t$tt%tXX$X$X;:$$XXXXi;;;:,,,,::,,,::::,,,,::@@@@@@@@@@@
@@@@@#@@#@##@@@@@@@@#@@@#@@@@@#@##@@@@@@@,,,,iXXXX$$XXX$itX%XXXXXXXXXXXX$%XXXXXXXXX%Xt%%%%%%%i;t%i%%X%X$XXX;%$XXXXX%;:;;:,,,:::,,::::,,,,,,:@@@@@@@@@@
@@@@@@@@####@@@@@@@@#@@@@@@@@@#@##@@@@@@$,,,t%XXXX$$$$$Xt%XXXXXXXXXXX$X$XX%XXXXX%XXX%X%%%%%t%ti;ittX%%$$$%Xi%XXXXXX%i;;:;;:,,:,,,,:,,,,,,,,,;@@@@@@@@@
@@@@@@@@###@#@@@@#@@#@##@@@@@#########@@X,:t;$X$$$$$$$$t%$XX%XXXX$X$X$X$$XXXXXXXX%XXX%%%%%%%%%t;ti%%X%%$$%%t%XXXXXX%;;;;::;:,,,,,,,,,,,,,,,,$@@@@@@@@@
@@@@@@@@###@@@@@@#@@#@#################@;:;:X$$$$$i$$$$XX$$XX$X$X$$XXX$X$$XXXXXXXX%XXX%%%%%%%%%ii%tt%t%$$$tt%XX%t%%%:;;;;;,::,,,,,,,,,,,,,:@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@##@@@@@#@@@:;iXX$X$X$$$$$%X$XXXX$$$X$$$XXXX$$XXXXXXXXXXXX%%%%%%%%tiit%%t%%X$$ttt%%%%%%;:,,:::::::,,,,,,,,,,,;@@@@@@@@@@@@
@@@@@##########@@@#@@@@@##########@@@@@@ti%XXX$$@$$$$$XX$XXX$$X$X$$$$XXX$$$XXXXXXXX%XXX%X%%%%%%iii%%%$Xt%%tiitt%%%;:::,,:::,:,;,,,,,,,,,%@@@@@@@@@@@@@
@@@@@##########@@##@@@@######@@@@@@@@@@@;i$X$$$$$$$$$XXX$$XX$$$$X$$$$$XXX$$$XX$XXXXXXXX%%%%X%%%iii%%X$$$%:;;ttt%%:;::,:,,:::,:::,,,,,,;@@@@@@@@@@@@@@@
@@@@@@#@#########@#@@@@@@@@@@@@@@@@@@@@@:$X$X@$$$$$$$XX$$$X$X$$$X$$$$$$XX$$$$XX$XXXXXXXX%X%XX%%iiii%$$$$$X%tXtti%%%;:;,:,,,,:,,:,,,,,%@@@@@@@@@@@@@@@@
@@@@@@#@#########@#@@@@@@@@@@@@@@@@@@@@@X@X$$$$$$$$$$XX$$$$$%$$$$$$$$$$$X$$$$XX$XXXXXXXXXXX%X%%itiiX$%$$$$Xt%ti%%XXi%:::,,,.::,,,,,,$@@@@@@@@@@@@@@@@@
@@@@@@@@@#@@@@#@@@#@@@@@#@@@@@@@@@@@@@@$$$X$@$$$$$$$X%$$$$$$X$$$$$$$$$$$$XX$$$XX$XXXXXXXX%XX%%%%itiiXt$$$$X%%t%X%XXXXi,::::,,,,::,,$@@@@@@@@@@@@@@@@@@
@@@@@@@@@#@@#@@##@#@@@@@@@@@@@@@@@@@@@$%@X$$X$$$@$$$XX$$$$$$$$$$$$$$$$$$$$$XX$XX$$$$XXXXX%XX%%%%%iiiiX%$$$%XX%%Xt%XXXti:::,,,,,,,,%@@@@@@@@@@@@@@@@@@@
@@@@@@@@@###@@@@@@@@@@@@@@@@@@@@@@@@@@$$@%$$$$$$$$$$XX$$$$$X$X$$$$$$$$$$$$X$$XXXX$$X$XXXXX%%X%%%%%tiii%%$$%XX%%XXttt%X$X:::,,,,,,;@@@@@@@@@@@@@@@@@@@@
@@@@@@@@##@@@@#@@@@@@@@@@@@@@@@@@@@@@$X$$X@XX$$$$$$$XX$$$X$X$X$$$$$$$$$$$$$$$$$$XXXXXXXXXXXXX%%X%%%%%t%XiiXXX%%%%%tit:$$t::::::,,@@@@@@@@@@@@@@@@@@@@@
@@@@@#####@@@#@#@@@@@@@@@@@@@@@@@@@@$@X$XX$X$$$$$$$$$$$$@X$XXX$$$$$$$$$$X$$X$$$$XX$XXXXXXXXX%%%%XX%%%%%tttXX%%%%%%tii;;;;::::::,@@@@@@@@@@@@@@@@@@@@@@
@@@@@###@@@@@@@@@@@@@@@@@@@@@@@@@@@$$X$$X$XX$$$$$$X$$$$$$X$X$$X$$$$$$$$$$X$X$$$$XXXXXXXXXXXX%X%%X%Xt%%%%tXX%%%ti%%titii,;:::::,$@@@@@@@@@@@@@@@@@@@@@@
@@@@@###@@@@@@@@@@@@@@@@@@@@@@@@@@@X$%$$X$XX$$$$$$X$$$$$$X$$$$$$$$$$$$$$$$XXX$$$$XXXXXXXXXXX%%X%%%%%t%%%%%%%ttt;t%%it%%i,:;::,:@@@@@@@@@@@@@@@@@@@@@@@
@@@@@##@##@@@@@@@@@@@@@@@@@@@@@@@@$XXX$$X$X$$$$$X$X$$$$$$X$$$$$$$$$$$$$$$$$$X$$$$XXXXXXXXX%XXX%%%%%X%t%%%i%%t%ititi;%%%%:,,:i:@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@##@##@@@@@@@@@@@@@@@@@@@@@@@Xt$tX$$XXX$$$$$$$%$$$$$$$XXX$$$X$$$$$$$$$$XXX$$$$XXXXXXXXXXX%XX%%XX%%t%%%t%%ti%t%t%%X%%;,,,,,@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@#@##@@@@@@@@@@@@@@@@@@@@@@$%X%tX$$XXXX$$$X$$%$$$X$$$XXX$$X$$$$$$$X$$$$XXXX$$XXXXXXXXX%X%%XtX%%X%%tt%ii%ii%t%%t%tX%%,.,,;@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@#@####@@@@@@@@@@@@@@@@@@@$%tX%t$X$XXXX$$$$$$X$$$$X$$XXX$$$$X$X$X$$$$$XXXXXX$$XXXXXXXXXX%%X%%XXX%%tttti:t;tt%%t%%%%i,,,,$@@@@@@@$@@@@@@@@@@@@@@@@
@@@@@@#@####@@@@@@@@@@@@@@@@@@$X%$X%tXX$%XXX$$$$$XX$$$$X$$$XX$$$X$XX$X$XX$XXXXXXXXXXXXXXXXXXX%%XXtXX%X%%tiiiiitiX%%%%%%i;:,,,X@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@#########@@@@@@@@@@@@@@@X@iX%XtXX$%%XX$$XX$XX$$$$X$$$XX%$X$$$X$$XXXXXXXXXXXXXXXXXXXXXXX%%XXt%X%X%%%;itiitiiit%X%tt,::,@@X@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@;%X%%tXX$%%XX$$XX$%X$$$$X$$$$X%XXXXXXX$XXXXXXXXX%XXXXXXXXXXXXXXt%X%%XXX%%%tt;%%ttttittti;,,::i@@X@@@@@@@@@@@$@@@@@@@@@@
@@@@@@#@@@@@@@@@@@@@@@@@@@@@%@i;%XX%tXX$%%XX$XXX$%X$$$$X$$$$XXX$X$XXX$$XXXXXXXXXXXXXXXXXXXXXXX%tX%tXX%%iti%i%tt%%itii;:::;;iti$@X@@@@@@@@@@@@@@@@@@@@@
@@@@@@#@@@@@@@@@@@@@@@@@@@@%@%:t%t$%%XXXXXXX$XXX$XX$$$$X$$X$XX%$$X$XXXXXXXXXXXXXX$XXXXXXXXXXXXXttX%XX%Xitttt%tt%%%%;i;i;:;itttti$t@@@@@@@@@@@@$@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@%@X:i%%tX%%XXXXXX$XXXX$XX$$$$X$$X$XX%$XX$XXXXXXXXXXXXX%XXXXXXXXXXXXXXt%%%tXXXi%tt%i%%Xt%t;i;tii;ttttiti;i$@@@@@@@@@@@$@@@@@@
@@@@@@@@#@@@@@@@@@@@@#@@@%@@:i%%%XX%%XXXXXX$X$XXX%X$$$XXXX$$$X%XXXX$XXXXXXXXXXXXXXXXXXXX%XXXXXXX%t%tXXiitiXttX%X%%t%it;iiiittiiiiii;X@@@@@@@@@@@$@@@@@
@@@@@$@@#@##@@@@@@#@##@@X@X:,t%%%XX%%XXXXXXXX$$XXXX$$$XXX$XX$XX%XXXXXXXXXXXXXXXXX%XXXXXXXXXXXXXX%%%t%Xt;ttt%tXt%X%%i:;iiitittitiiiiiii$@@@@@@@@@$@@@@@
@@@@@@@@@@@#@#@@@@@@@@@$@X:,:Xt%%XX%tXXXXXXXX$XXX%X$$$XXXXXXXXXtXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX%X%tt%%%ti%ttiit%%%tt;iti;%t;ttiiiiiii;ii$@@@@@@@@$@@@@
@@@@@@@@@@###@#@@@@@@$@@$;,:t%%%%XXXtXXXXXXXX$XXX%XX$$XXXXXXX$XtXXXXXXXXXXXXXXXXXXtXXXXXXXXXXXXXX%%tt%Xt;i%titi%t%tti,ti;ttt;tii%iiiii;;;;t$@@@@@@@@@@
@@@@@@@@@@@#@@@@@@@@X@@t;,:,Xt%t%%X%%XXXXXXXX$XXX%XX$$XXXXXX$XXttXXXXXXXXXXXXXXXXXX%XXXXXXXXXXXXXXXtt%X%:;ititit%titt;;tiittt;tit%$$%tii;;;iiit%XX%t;$
@@@@@@@@@@@@@@@@@@X$@@i::,,t%t%tXXX%%XXXXXXXXXXXX%XX$$$XXXXXXXXttX$XX$XXXXXXXXXXXXX%XXXXXXXXXXXXXX%Xt%X%%%ittttit%%itt,ti;tttt;titt$@@@XX@@@@@@@$tit$$
@@@@@@@@@@@@@@@@%%@@@t;::,:Xt%%tXXXX%XXXXXXXXXXXXXXXX$XXXXXXXXXXt%XXXXXXXXXXXXXXXXXX%XXXXXXXXXXXXX%%%t%%Xti;titiit%%%%::t;ittit;tit$$@@@@@$$@@@@$$@@@@
@@@@@@@@@iittttt@@@%t;;::,t%iXttXXXX%%XXXXXXXXXXXX%XXXX$X$XXXXX%%%XXXXXXXXXXXXXXXXXX%XXXXXXXXXXXXXXXX%%%X%tiii;ttt%%%tt,i;ittttiitit@$@@@@@@@@@@$@@@@@
@@@@@@@@@@$t%$@@@$ttti;;:;XtiXttXX%X%%XXXXXXX$XXXX%XXXXXXXXXXXXX%X%XXXXXXXXXXXXXXXXXX%XXXXXXXXXXXXX%%%%XX%Xttttt%%%X%t%,,;iittttiiii$$@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@$%%tii;i::%%ii%ttXX%Xt%XXXXXXX$XXXXtXXXXXXXXXXXXX%X%XXXXXXXXXXXXX%%%%%t%XXX%%XXXXXXXXX%t%XXXXXXXt%XXX%%ti,,;itttttiiti@$$@@@@@@@@@@@@@@
@@@@@@@@@$@@$%%%%tti;i;;t%iittttXX%Xt%XXXXXXXXXXXX%XXXXXXXXXXXXXXX$%X$XX$XXXXXXXXXXXXXXXXXXXXXXXXXXXXX%tXXXX%XXX%%%X%ttt,,;titttttit;t@@@@@@@@@@@@@@@@
@@@@@@@@Xttt%%t%%%;itiiiXiti%;ttXX%%t%%XXXXXXXXXXXX%XXXX%%XXXXXXXX$$XX$XX$$XXXXXXXXXXX%XXXX%%XXXXXXXXX%%%X%XX%XXt%%%%%itt,,titttttt;%t%@@@@@@@@@@@@@@@
@@@@@@@@@@@%ttt%%tittiiXitit%;itXX%%t%%XXXXX%XXXXXXt%%%X%%X%XXXXXX$$X$XX$XXXXXXXX%XX%%X%%XXX%XXXXXXXXXX%%XXXXX%%%%%%%%%tti,tiitititti%%X@@@@@@@@@@@@@@
@@@@@@@@@@@@@%tt%Xttii%%;tii%;itXX%%it%XXXXX%XXXXXX%XXXXX%XXXXXXXX$@$%XXXXXXXXXXX%%XXt%tX%%%%tXXXXXXXXX%t%%XXXXX%%%%%%%tt%:tttiiittti%$tX@@@@@@@@@@@@@
@@@@@@@@@@@@@@%t%%%iiiX;%:ti%tit%%%%tt%XXXX%XXXXXXXX%XXXX%%XXXXXXXX$$$XXXXX$XXXXXX%tX%:t:;iiX%XXXXXXXXX%%t%XXXX%%%X%%%%tttttttii;iitii@@%XXX@@@@$@@@@@
@$@@@@@@@@@@@@@%%Xiii%iii:ttt%%XXX%%%t%%XXX%XXXXXXXi%%%X%%%%XXX%XXX$@@XXXXXXXXX%%X%t;ii i,;iiit%XXXXXXXX%%t%XXXXX%%%%%%t%tttttt;:;ttti$@@XX@@@$@@@@@@@
@@@@@@@@@@@@@@@@%tiittiii;ttiX$@@$%%%%%%XXX%XXXXXXXt%%X%X%t%%XX%%X%X@@@XXXXXXXXX%%%i,,;;.:,i;:iii%X%X%XXX%%t%XX%%%%%%%%%t%itttt:,:;ittt@@$XX@@@$@$$@@@
@@@@@@@@@@@@@@@@%itiiitiiitttX@$$X%%%XtXXXXX%%XXX%X%%t%t%%ttt%%%t%%X$@@@XX%XXXXX%i;;i,:,,:::;;,tittX%%t%X%%t%tXXXX%%%t%%tttttti,:,:;iii@@@%XX$@@@@@$@@
@@@@@@@@@@@@@@@@@;iti%i;itt%t%%%%%X%%%%%%XXX%XXX%%X%it:ii;.,i;tX%X%t$$@@@XXXXXXX%t::,,,,,,,::i::it%%t%tt%t%%ttt%%%X%%%%%%ttttti,;,,:;;ii@@@@X%@@@@@@@@
@@@@@@@@@@@@@$Xt@tiii;i;;ii%t%ti%t%Xt%XXXXXXtXXX%ttt;;i.,.:.,:,%$$X$t@@@@@$$@$$XX:i:::::,,:;;i;.%%X%%%it%titt%%%%XXX%t%%%it%%ti;:,,,ii:i;%@X$X$@@@@@@@
@@@@@@@@@@@@@@@@@$iiiii;;iittttt%t%XttXt%XXX%XX%X%ii:,.,,,,,,,::X$$@$X@@@@@@$@@@$;X:i;tX;iii:t;:t%XXXtt%%%tXt%XXXXXXX%%X%itt%%ii;,,,:ti:i;;t@@X@@@@@@@
@@@@@@@@@@@@@@@@@@iiiii;:i;ttt%t%t%%X%X%%XXXX%%%%iiii,,,,:::,,:,$@@@@@$@@@@@@@@@@$@:tXX%t%%t,Xi;%XXXXtt%XX%XiX%XXXXXXXt%ti%t%tii;;:,,ii;;i::;%@%@@@@@@
@@@@@@@@@@@@@@@@@@X;;i;;i;;titi%%t%%%%%X%XXXXi%%%itii;,,,,::,:;.t@@@@@@@@@@@@@@@@@@%%$$$XX%iXtttt%X%X%t%XX%%ttX%XXXXX%X%tt%tttitiii;:;i:::t:::i%%@@@@@
@@@@@@@@@@@@@@@@@@@iit;;;;itiii%ttt%%%%X%%XXXi%%%ttiti:i;t;X,ti,X@@@@@@@@@@@@@@@@@@@%X$$$$X%tti%;tXXXXtXXX%%%i%XX%%XXX%X%t%%%%;ttiiiii;:::;i;;:;ii$@@@
@@@@@@@@@@@$@@@@@@XXi;;;;;itiii%tt%%XttX%XXXX%t%%%ttit;;tit;;%X,@@@@@@@@@@@@@@@@@@@@@@%%t;itti%%iiX%XX%XXXX%%i%tXX%%tXX%X%ttti;iitii;tti:::;;;t;:;iitX
@@@@@@@@@@@@@@@@@@@@t;;;;;iii;itt;%%%t%t%%XXX%%%i%%%i%%,%%X$$X$;@@@@@@@@@@@@@@@@@@@@@@$$$$X%%%X%tt%tXXt%XXX%%tX%t%XX%tt%%%%%t:t:,ti;i%tti;::;;;;:::;i$
@@@@@@@@@@@@@@@@@@@@@Xii;;iii;ittt%%%t%%%tXXX%$%i%%tti%t;$X$XXt@@@@@@@@@@@@@@@@@@@@@@@@$$$$$$$Xit%ttiXXXXXXX%iXX%%%XXXt%it%%%ti,;;iti%ttiit:,:i:;::;@@
@@@@@@@@@@@@@@@@@@@@@X@tiiiii;itti%t%%%%%%X%XXX%%t%%%tttX:t%%i$@@@@@@@@@@$@@@@@@@@@@@@@@@$$$$$Xi%tt%tX%X%XXXXiX%%X%t%XX%%tit%%%iiitii:;iii;;;::;::;$@@
@@@@@@@@@@@@@@@@@@@@@@X$%:;ii,:itit%%%t%%%t%X%%X%tt%%%tittt%$@@@@@@@@@@@@$@@@@@@@@@@@@@@@$$$$$t%%%t%t%%%X%XXXtX%XtX%ttXX%t%tii%%%ttt;i,;i;;;i;,;:;%@@@
@$@@@@@@@@@@@$X@@@@@X@t@i;ii;;:itttt%%i%%%%X%XXtti%%t%%t%$$$$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$$$it$ti%tiXtXXXXXt%%X%%Xtti%%%%tti;itt%;::;;:i;:::::;;@@@@
$@$@@@@@@@@@@@@$@@@@@@X%ti;i;;,itit%t%tt%%tt%XX%it%t%%%%%X$$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@Xt%$tttit%tXX%XXt%%%%%%t:t;i%%%t%iiit%;;;;:::i;::;:,t@@@@
@@$@@@@@@@@@@@@$@@@i$%%X%%;;;t:itiititt%%%%%%%X%%iX%t%t%%t$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@tt$@i%itt%%%XXXXtX%X%tt%t;tii%%%ttii:;%i;ii:::;:;:;;;%@@@
@$@$@@@@@@@@@@@@$@%@@tX$%%:;:ii;tiit%%ttt%%%t%%X%%ttit%%%$%X@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$i$@$Xttt%t%%XX%Xt%XXt%tt%t;i%i%%t%;;::iii;it:;::;:;%@t%@@
@@@@$@@@@@@@@@@@$@@@@$$Xi;;;:i;:titttttt%t%Xt%%XX%t%%it%%%$$%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@iXtX$%%%%XXXXXt%%%itt:%%;%%i%%tttt:;:ii;i;i;:::t@@@%$@
X@@@@$$@@@@@@@@@X@@@tt%XX$XX;it;t;;itt%itttX%t%%X%%%$Xt;i%%$$@$$@@@@@@@@@@@@@@@@@@@@@@@@@@@$$@$$@tXt@%X%%XXXXX@XXXtiti;t%%%%;%%ti;ti;ii;it:i;;%@@@@@i@
@$@@@@$@@@@@@@$$@@@X%@@@$XXX;iiiii;itttitttXX$t%%%%XX@%Xi%%t%X@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@i%$@@%t%%XXX%X$@@%%%tt;:it%t:;%%iiiiitii;it:$@@@@@@@$$
@X@@@@@$$@@@@@%@@@$i$@@@XXXt;itiii;ittt%tttX$t@t%%%%X$@X%iXt%$@@@@@@@@@@@@@@@@@$@@@@@@@@@@X@@@@$$@X@@tt%%XXXXX$$@@%%%tt:iiitt;%t:tt;;iii;;tt@@@@@@@@@X
@$$@@@@@$X@@@@$@$$Xi$@@@%i$@X%iiii;iitt;iit%$X$@t%%%%%@XX%t$$@@@@@@@@@$$@@@@@@@@@@@@@@@@@X@@@@@$@X@@$%X%tXXXXXX$$@$tittiiiiii%tt::itt;iii;itX@@@@@@@@$
@@$@@@@@@$X@@@@$@@@%$@@$i%@@%Xiit%;;tttiit;t$$%$@t%%%%%XXX%%$@@@@@@@@@@@@@@@@@@@@@@@@@@@X@@@@@@$$@@@$tX$%XXXXXX$$$$ttiiiiiii;itt%t;iit;ii;itt@@@@@@@@@
@@$@@@@@@$$$$@Xt@@@$@@@Xi@@$%%t%i%i;;iii;t%iXX%$$$%%%%%tXX%%X$@@@@@@@@@@@@@@@@@@@@@@@@$X@$@@@@@%@@@$Xt$$XXXXXXX$$$$%ittiii;ii;;;%tttittii:;itt@@@@@@@@
@@@$@@@@@$$X$$%i$@@@$@@XX@@$;i;;i%t;iiiii;tt%X$X$$$X%%%%t%%Xt$$@@@@@@@@@@@@@@@@@@@@@@%$$@$$$@@@$$@@@%t%$XXXXX%X$X$Xt%%ittitiiii::itt%iiii;i;tt$@@@@@@@
@@@@@@@@@@$$X$%i%@@@$@@@$@@%;;iiiittii;ii;it@X%%X$$$$%%%%tt%%%$%$@@@@@@@@@@@@@@@@@@$;t$$@$$$@@@$@@@@%%$$XXXXX%X$$XXti%t%itititi;;;;t%tiii:ii;t%@@@@@@@
@@@@$@@@@@@@$X%;t%@@$@@@X$$%;iitt;iti:;;;;:iX@X%%X$X$$%%t%t%tt%$$X$@@@@@@@@@@@@@@@iitXX$$$$$@@@@@$$$t$$$XXXX%XX$XXXtiitttttitiii;:;ittiii;iiii%$@@@@@@
@@@@@$@@@@@@$$%:ti$@$$@$$$$Xiiittt;:titi::;ii@@$X$X$$$$X%t%%$%i$$$$$t$@@@@@@@@@@ittt%XXX$XX$$@$@$@$%%@$$XXXXtXX$$XXXiii;tittttti;;;iitiii;iii;t%@@@@@@
@@@@@@@@@@@@@$;:iii$$$$$$$$Xittitti;;itti:;:t%@@$$$$$$$$$X%%%X%tX%XXiiitX@@@@$it%%%XXXXX$$X$X$$$@@$i$$$$%XXX%%XX$$%XX%iiiiiitttiit;;i;it;i:tiiit@@@@@@
@@@@$@$@@@@@@$i;iit%$X$$$$$Xtt;ttt;i;;ittt%,:@t$@$$@@$$$$$%@X%Xt%X$XtXttttt;itt%%%XXX%XXXX%XX$$$$@XX$$$XXX%tX%XXX$X%XXt%iiiiititi;i:;;;%i;,titit%@@@@@
@@@@@@@@@@@@@%it;i%t%$$$$$$Xti;t:ii;;:;%%%%X%t@Xt$$@$@$$$$$$$$%ttXXXt$$%%%%t%%%%XXXXXX$XXXXXX%$$X@@$$$X%%%%%%%XXX%XXi%%%%%iiiiiititi;ii%t:;ttttit@@@@@
@@@@@X@$$@@X%tittitii%X$$XXXXX$%tX%t;i:ttt$$@@XX@$X$@@@$@@X%@@$Xt$%$t$$$$%%%%%XXXX$XX$XX%X%$$X%XX$@@@$$%XttXtXXXX%%%Xit%%%tt%i;;tttt;:;tii;ttiii%@@@@@
@@@@@X$X$@@ttttti%titt%X$$X$$@$$%t%%tiitiit$@@@@@@@@@@@@@@$%@@@XXtiX,t$$$XXX%XXXX%XX;$$X%X@%XXX%XX$@@@X%tt%%X%$XX%%%t%ii%%%tX%t;tt%%itt;;;tititttX@@@@
@@@@@@XXX@X%iit;i%tt%%%X$$$$@@@@$iiti;iiiiti@@@@@@@@@@@@@@@@@@$t%%$t:::;;tXX%ittt:,,,$$$%t@tXXXX%XX@@@X%%%%%%X$$$Xttt;tt;iii%tX;it%%%;%t;tittttttt@@@@
@@@@@@%$XX%tittittittX@@X$$@@@$%%tiXt;:;%tXt$@@@@@$X%XXXX$$@$$%;;iX,.:::t,.,,,....,,,%$$XX$X$XXXX%XX@%$@$%X%%%X@@@X%%;;ittiii%%ttt%%t%;i;tiiiittii$@@$
##@@@@@$X%%tiii%ttt%$@X$$$$@$$@@$$t$$i;%%itt%@@$$$$@@$$$XXX$;X$t;tX%:,::i;.,,,,......%@$$%%X$XXX%X%X%@@@@XXX%%t@@@@@$i;;;;ii%%%%%%%t%tiiiiiiitittt$%%t
@@@@@@@;tt%@@$$$$X$$@%X@@@$$$@@@$$%tX%%;X%itiXX@@@$$@@@@@$%%%tX%;:X$$%;;:;..,,,,,,,,ttt@$@tt@$XX%%%XX$$@@@@$$%%%@@@@@$Xi;;;%%XX%%%tt%%tiiiiiiiitttt%t$
@@@@@@@t;%$$@@$@@X@$$X$@@$$@@@@@$$XtX%%ttXXttX@$@@@@@@@@@@@@X%%%t;iX$$$$Xti.;;i;%%XX%tit;$@Xt@X%%%@$$X@$@@@@$@X%X@@@@@@@@@@@@@@@@@@@$%t:;iii;ittt%ti$@
@@@@@@@@t%X$X@@@@$@@X$$@@$@@@@@@$$XiiXt%%X%i%t@@X@@@@@@@@@@@@@XXtt;iX$$$$X$iXXXXX$$XX%%t;%X@XX$t%X$@@X%@@@@@@@@@%X@@@@@@@@@@@@@@@@@X@X@$%iiiiititt%$@@
@@@@@@@@%XX$$X@@$$@X$@%$$@@@$@@@$$X%tXXtt%X;%t@@@@$@@@@@@@@@@@$@%%tii%$$$$$XX$$$$$$$X%%t;t$%$$@%X%%@@@%$@@@@@@@@@%@@@@@@@@@@@@@@@@@@@$@@@$$$$@$%ttt@@@
@@@@@@@@@t$X$$$@$@X$@@$$@$@@@@@XX$X$%%Xt%X%t%$$@@@@@@@@@@@@@@@@@$%$XtitX$$$XX$$XXX$XXXtiX$$X$XX$XX%%@@@X@@@#@@@@@$@@@@@@@@@@@@@@@@@@@$@$$$@@@@@X%%i$@@
@@@@@@@@@XX@$$@X@%XX@$$@@@@$@@@$X$X%t%tt%%it@$$@@@@@@@@@@@@@@@@@%$$@$@%i%X$XX$$$XXXXXXtXXXX$XXX$X%ti$@@%@@@@@@@@@@@@@@@@@X@@@@@@@@@@@$$$$$@@@@%%@@@t@@
@@@@@@@@@@%$@$$$$$$$X@@@@@@@@$@$XXX%%%t%%tiX@X$@@@@@@@@@@@@@@@@@X$@$@@X$itt%XX$XXXXXXtX%XiXXXXX%%%%%X%XX@@@@@@@@@@@@@@@@@@@@@@@@@@@XX$$$$@@@@%X$@@@$$$
@@@@@@@@@@$%@$$%X$@@$$$@@@@@$$%X$%%t%ttt%tXX$X@@@@@@@@@@@@@@@@@@$@@@@t@@X$itt%XXXX$$i%XXtXX%X%%%tt%@@@$@@$@@@@#@@@@@##@@@@@@@@@@@%%$$$$$@@@$%$$@@$$$$$
@@@@@@@@@@$XX@$ttX@@@@@%X$@@$$$i;;:,:;:;@tXX%X@@@@@@@@@@@@@@@@@@$@@@@$X$@@$itti:i%%;%XXXXX%%i::itX$@@@@@@$$@@@@##########@@@@@$tt$$$$$$$@$%%XX@@@$$$$$
@@@@@@@@@@@@X$$X%$@@@@@X@%$XXi;,:;;:it%%$t%XXX@@@@@@@@@@@@@@@@@@@@@@@$@$X@@$tt%tt::t%X%XX%::,,,,X$$$@@@@@@@$@@@####@####@@@@$X%%$$@@$$$@XXXXX@@@@$$$$$
@$$@@@@@@@@@@$$$$@@@@$@@$$XX;X$,,i,:t%%X$ttXX%$@@@@@@$@@@@@@$@@@@@@$$$XXX$@%;i%%%,,%%i%%:,,::,,$%$$@$@@@@@@$@@@@@@@@@@@@@@@$XX$$@@@@$@@XXX$$@@@@@@$$$$
$$$$@@$@@@@@@@X$@@@@@@$@$$X%@tii%,::t%XX%t%XXX$@@$@@@$@@@@@@$@@@@t::;;;:;iii::ti:..,t;:,:::,,,X$$@@@@@@@@@@@$@@####@@@@@@%$$$$@@@@$$$$$XX$$$@@@@@@@$$$
$$$$@@@@@@@@@@@X$@@@@@@$@$$$@t;%%it,t%XXiXXXX$X$@$@@@$@@@@@$@@@@@;,:::::;;:;:,,:,,,,,,:::,:,,tXX%@@@@@@@@@@@$$@@@@@@@@@@X$$$@@@@@$$$$$XX$$%@@@@@@@@@$$
$@$$@@@@@@@@@@@@X$@@@@@@$$$@%X@$:@t;,%%XiXX%%$X$@$@@@@@@@@@$@@@$$:,::::;;;::;:,::,,,,,,:;:::;X%XtX@@@@@@@@@@@$@@@@@@@$%$$$$@@@@$@@$$$$X$$%@@@@@@@@@$$$
$$@@@@@@@@@@@@@@@$X$@@@@@$$XX%%Xi@@,%%XXt%XX%$XX@$@@@@@@@@@X@@@$@;,,:::::,;;;:,,::::,,::;;::XXX%t%@@@@@@@@@@@$X@@@@Xt%@@@X@$$@@@$$$$$X$$t@@@@@@@@@@@$$
@@@@@@@@@@@@##@@@@XX$@@@$$$XXt$%;ttXi%%X%%%XX$$$$$$@@@@@@@$$@@@$@i:::::;,;:;;i,::,::;:,:::,tttttt%@@@$@@@@@@@$$$@@$%%@@@@@$$@@$@@@$$X$$X@@@@@@@@@@@@$$
@@@@@@@@@@@@##@#@@@XX$$$$$$$%t:,iXti;%XX%ttXX$$$X$$@@@@@@@$$@@@$@%,::::,,:;i;:,:,,;::,,;:ittttititX@@@$@@@@@@$$$$@XX$@@$@@@$X$@@@@$X$$%@@@@@@@@@@@@@$$
@@$@@@@@@@@@@@@@@@@@XX$$$@@$XitXti@@:t%Xt%t$X$X$$X$@@@@$@$X@@@@$$t::::,;;;ii;;,:,;t;:;:,.,ttttitiiX@@@@@@@@@@@$$XXX$$$$$$$$$$@@$$$$$$%@@@@@@@@%@@@@@@$
@$@@@@@@@@@@@@@##@@@@$X$X$@@$i@@;$@t,X%t%tX$X$X$$X$$@@@@$$$@@@@$$;,::,:;;;ii,,::,;t;::;,:..,;i;i;iX$@$@$@@@@@$$$$t$@@@$$@$@@@$$$$$$X%@@X@@@@@@@@@@@@$@
@@@@@@@@@@@@###@#@@@@@@X$X$@$i@@%:;$;$$%%t;$t$X$$XX$@@$$XX$@@@$$$:,,:::;:i;,,:,i:;%;.,::;;,,,.;;;;%$@@$@$$$@@@@@@$t@$@@$$@$$$$$$$$%%@@@@@@@@@@@@@@@@@@
##@@@@@@@#@@@@@@@@@@@@@$$$XXXt@@$:$ii$@$%t;ti$$$$$XX$@$$X$$@@@$$$:,,,::;;:,,:;ii,t%t,::;:;:,.,,,;;iX@@$@$$$@@@@$@$$X@@@@$XX$$$$$$%$@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@#####@@@@@@@@@@@XXXi@@,:i;:,$$%:%;t$$X$$XXX@$$X$$@@@X$X:,,,,;;,,,:;;ii,ttt,:;;i:;;,,.,,;;%@@@@@@@$@@@@@$@X$@@$$$$$$$XX$@@@@@@@@@@@@@@@@@@@@@
###@@@@@@@#####@@@@@@@@@@@@%%;%X%.t.:,;,:tititXX$$XX%$$X$@$@@$X$X,,::::,,,,i;i;i;%%%i;i;;;:;::,::,,X$$@@@$@@@@@@@@@XX@@@$$$$XX$@@@@@@@@@@@@@@@@@@@@@@@
#####@@$@@@@###@@@@@@@@@@@@@XX;iti:..:;ti,;:itt%$$$X%$X$@XX@X$%$X,,:;,,,,,;:i:;iti:,:t;;;;;::;;::t%X%$@@@@$@@@@@@@@@X%$XX$XX$@@@@@@@@@@@@@@@@@@@@@@@@@
@#@@@@$X@@@@@@@@@@@@@@@@@@@@$%XX$%;%;,i;;ti%:;tti$XXXXX$$$$$$X%$X,,;,,,,,;;:;;;;%,,:,i:i;;:;;:;;i;ti$X$X@@$$@@@@@$@@$Xt%X@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@#@@@@@@@@@@@@@@@@@@@@@@@@@$$$XX$$t$.X,:$%%i%,ii%%XX%XX$$%%$%t$%;:;:,,,,:;:;:;;;%,;:,i;;;:;;;;:;;i;i%X$$@@@X@@@@@$$@@$%X@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@#@@@@@$@$$X$X$t,X;;i$%tii;%%XX%X$$$$$XX%X;i;,,t,::::;;:;;;t,t:%tt;;;::;;;;;;;;:%$$@@@@X@@@@@$$@$@X$@@@@#@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@$X$$@@@@@@@@@@@$@@$$$t$$XiiXi:i%t:%t%tX%%X$$$$$$%$t$%;ii,;::::;:::i:%i%$$%%i;;:::;;;;;;;;t%$@@@@$@@@@@@@$@@$X$$@@@@@@@@@@@@@@@@@@@@@@@@@@@
@#@@@@@@@@X%X$$$$XX$$@@@$$$$$$$@$Xt@$iti%t%iXititit%tX$$$$$$%$$%Xtt:;::;;:;:::i;%$i$$X%t;;;:::;;;;;;;tX$@@@@@$@@@@@$$$@$$XXX@@@@@@@@@@@@@@@@@@@@@@@@@$
@@@@@@@@@@@@@@@@@@$$@$@$$@$$@$@@@$tX@X$$:$%ttiiti%%tXXX$X$$$X$X%XX;;::::;:::;;i;%$i@$XXX%;;::::;:;t%%iiX@@@@$X@@@@@@@$$@XXX%%@@@@@@@@@@@@@@@@@@@@@@@$$
@@@@@@$@@@@@@@@@@@@@@@@$$@$$@$@$@@$$%@%%$:Xti%t;tiit%%$X$$$X$$%XXtt;:::::::,:;i;%@;@@$XXXi;:::::i%%%t;X%$$$$$$$@@@@@@$$$$%X%%t@@@@@@@@@@@@@@@@@@@@@@$$
@@@@$$@@@@@@@@@@@@@@@$$$%$@$@@@@@@@X@tt@t$t%t%tX;:i%X%%$$$$$tX%XXtttt:::::,::;ii%@%$@@X%%%;;:;;:;tiX$$@X@@$$$$X$@@@@@$$$XX%%%Xt@@@@@@@@@@@@@@@@@@@@@$$
@@$$@@@@@@@@@@$$@@$$$$$$XX@@@@$@@@@@@%;$XX$Xt%Xi%tt%%%$XXXXX$%X$$$%t%ti:;;;:;;ii%@$$@@$$%%:t::ii%t$@$%X%X$XX$XXX@@@@$$X%%%ii$$X%$@@@@@@@@@@@@@@@@@@@$$
$$$@@@@@@@@@@@@@@$$@$$X$@X$@@@$@@@@@@@@X$X$$$iXXi%t%%XX$$$$$%$X$$$$$%iiti;:;;;it%@@%@@@@Xi;;:::i;%X%X$$$$@@$$$$X$$X$$$XXXXXiXXXXt%@@@@@@@@@@@@@@@@$$$$
$@$@@@$@@@@$$@@@@@@$XX$X@$X@@@@$@@@@@@@@$$$$$$i$t%;,i%%$$$$$%X$$$$$$@$$X%%Xi:;i%X@@%@@@XX%X:itt%$$$$$$$@$@@@$X$XtXX%XXXX%itX%X%tt;i@@@@@@@@@@@@@@@$$$$
@@$XX$$$$$XX$$$$$$XX@$@$@$$@X@@$$@@@@@@@@X$$$$$X$Xt;ttt$$$$$iit%XX@$X$$$$$Xtt:iX$@@X@@@XXX$%tiX$$$$$$$$@X$@$XX%X%t%X$$$$X$%%%%ttt%t%@@@@@@@@@@@@@@$$$$
tt%%%%%X%X$$$$$$$@@@@$@$@@$$$@@@@@@@@@@@$$X@X$XXX$t...i$$$$$it%Xti%$tt$$tX$$i%:X$$@X@%%$%%%%XX%$%X$@$%$@$$ttttii%%XXXX$$XXX%%%ti%%%%t@@@@@@@@@$@@@$$$$
%%XXXXX$$$$$$$$@@@@@@@@$$@@@@$@@$@@@@@@@@$$X@X$X$Xt;,..:i;t%%tttX%X%$$X%XX%XX%XXX$@Xttii%XXX%X%X$$XXX%tt%%%t%%tii;XX%X%%%it%t%t%%t%ti@@@@@@@@@@$@@@@@@
XX$$$$$@@$@@@@@@@@@@@@X@X@@@@$@@@@$@@@@@@$$$X$$$XX%t::,,i;iiiiXX%XXtXX$%X$X%%%$XX@@XttiiX$%$%X%XXX%X%%%ttXX%%%t%itt%%X%%tti%%t%%%%iit@@@@$$@@@@@@@@@@@
$$$$$$$@$$$@@$@@@@@@@@X@X@@@@@$@@$@$@@@@$$$$$$@$$X%t:;,;:;i;t;iX%XXXXX$$@XXXX%$XX@@X@%%$XX%$X@@@$@$@@$@tt%X%%%%tti;%%%X%%%%%t%%X%%%X$@@@$$$$@@@@@@@@@@
X$$$$$$$$$$$@@$@@@@@@@$$$@$@@@@@@@@@@@@@$$X$$$X$$XXt.;,;i;;;iiitX@@$@@@$@@@$X$$XX@@%@@@@$X%@@@@@@@@@@$@$%tXXXXXX%ti%X%%%%%tttt%%%X$X@@@@$$$$$$$@@@@$@@
X$$$$$XXX$$$$$$@@@@@@@@$@@@@@@@$@@@@@@@@@@$$$$$X%$Xi.:,;;,ii%%XXX@@$@@@$@@@@@%%@@$@%@@@@$X@@@@@@@@@@@$@$@X@@X$XX%%%%XX%%X%%tttttt%XX@@@@$$$$$$$$@@@$$$
XXXXX$XXX$$$$$$@@@@@@@$X$@@$@@X@@@@@@@@$@@$$$@$$X$Xt..::::tt%%XX%@@$@@@@@@@@@$@@@@@%@@@@@@@@@@@@@@@@@@@$@%@@@@@$$Xtt%XX%%XX%tt%X%tX@@$@$$$$X$$$$$@$$$$
%XXXXXXX$XXX$$$@@@@@@X$@$$@$@@@@@@@@@@@@@@@$@$@$$$X;.,:::iit%%XXX$@$@@@$@t@$@$@@@$@t@@@@@@@@@@@@@@@$@@@$@X@@@@@@$$XiXXX%XX%%%%X%$@$@$X$$$$$%XXX$$$$$$$
t%%%%XX%XXXX$$$@@@@@@@@$X$@@X@@$@@@@@@$$@@@$$$@$$$%:,,:::iitttXX%$$$XX$$@ti%@$@@$@@i@@@@@@$@@@@@@@@$@@@$@$@@@@@$$@$tX%XXXX%%X%tXXX@@@@@$$$$%%XXXX$$$$$
ttt%tt%%%%%XXXX$$@@@@$$XX$@@$@@@@@@@@@$@@@@@$$$@$$%,i,::i:tttt%%%XXtX$$iii%$%X@@$@$i@@@$@@$@@@@@@@@$@$@$$$@@@@@$@@@$X@%X%X%%%XX$XX$@@@@@$X$$%%XX$$$$$$
ttttttt%t%%%X%iX$$@@$$$XXX$@@$@@@@@@@@@$@@@@@$$@$$%:t,::;;;ttt%%tX%%X$@@tt%$%tX$X$%t@@$$@@X@@@@@@@@$@$@$t@$@@@$@@@@$t@@$XXX$$$@$%X$@@@@@@@$XX$$$$$$$$$
titttttt%%%%%i:,X@@$X$X$%$$@$@@@@$@@@$@@$$@@@$$@@$Xii.,,t$X;ti%%t%t%%X@@%X%@t$tt%X;X$$$$$@@@$@$@@@@$@$@X;@$@@$$@@@@$$@@@@@XX$$$$@@@@@@@$$@@$X$$$$$$$$$
%iiittttt%%%%t,:t@@$%t;;i$X@@@$@@@@@@$@@$$@@@@$@@$X;i,.:i$$@@%i%tit%%%X@@X%t$$Xtii.iittttX$$$$$$$$$@$X$t,$$@@$@@@@@$$$@@@@$XXX$$@@@@@@@@@@@$$t$$@$$$$$
itiiittttt%%%%%iX$$,......:$@@@@@@@@@@$@@$$@$@$@@@X;i;,,:$$$$$@@$tti;ii$$tX%@$XXii.,,,i%iittX$X$$$X$$t%t;X@@$@@@@@$$$%@@@@@@X$$$X$@@@@@@@@@@@@$X@@@$$$
titiittttt%%%%@$$$Xt,:.....%@@@@@@@@@@$@$@X$@@$@@@%:;i,,::%$$$XXX$t%%ttXX%%t@$@@$i,,:,itt;i;;it%tXt%t%t:iX$@X@@@@$@$$X@@@@@@@$$@@%$$$$$XXXXX%X$$$@@@$$
tiitiittttt%%$@$$Xii:,,:,..i$$$@$@@@@@@$$$$X$@@$$@t,ii,,,,,:;t%X$$$%%t%X$t%XXX@@@X:::;iii;i;i;i;iitiit:.iX$$$@$@$$$$$tXXX@@@@$@$$$X$XXXXXXXXXX$$$@@@@@
iiiitiitttt%%$$X$X:,:,,,,,:;X$@@@@@@@@@$$$@@X@@$$@t;i;.,,,,,t$$$$$X%%%t$$t%X%XX@$t;%;;...:;;;;i;t;ti;,.,t$X$$$@$$$$$$t..:@@@@@@@$$$$XXX%%%%%XXXXX$@@@@
iiiiiitiitttXXXX$%i:,,,,:,,;t$$$@$@@@@@@$$$$@%@$$$tii.,,,,X@@@@$$$X%%ttX$%X$%@@$@;,,t:.,,,.,:;;:;:,,.,,:%XXX$@$$$$$$$ti;:@@@@@@$$$$XXX%%%%%%$XXXXX$@@@
iiiiiii%ttt%XXXX%%ti;i:::::,i$%$@@@@@@$@$$@$@X@$$Xti;,,,;@XXXXX$$$XXtttX$%XX$@@@%t;t:,:.,,,,::;;;;:,.,,;%XXX@@$%$$$$$tt;,X$@@@$$$$XXXX%%%%%XXXXXXX@@@@
iiiiittit%%X%%Xt%ttXX$::::,:i%$X$@$@@@@$$X$$$@$$$%it:..X$$XXX$$$$XXXttt$$%X@$@@$t%i:,$:;:..,,:,,,::,,.,;t%%$$XX$$$$$Xtt::XXXX$$$$$XXXX%%%%%ttt%%$$%%%$
iiiiittttt%XXX%%itXX$$;;;;:,it$@$@@$@@$$$$$$$@X@$itt.tX$$$XX$$$$$XXXttt$$t%$$$@$tiii$@@%:,,.,,::::,,...:t%%X%X$$$$$$%tt;;X$$$$X$$XXXX%%%X%tttt%Xtii;ii
tiiitttttt%%%%t;%X$$$$X;;;;,;%%$$$@@$@$$$$X$$$X$Xiti:X$$$X%$$$$$XXXX%tiX$t%%XX$ii:ii$@@,,:,,,::,,......:;i%%X$XXXXX%ttt;,X$@@$$X$$XX%%%X%%%%XXtiii;:;;
%%ttttttti%%ttt%%XXX$$$:;;:,:ttX@@$@@$$XX$$$$$X$%tt;%%$X%:XXXXXXXXXX%%i%t%iiiiiii.ii%XX,,%i,,;.  ......,;,:iiti%XX%ttiii,XX$@@$$XXXX%XX%%%X%tttiitt%t%
%%%%%ttttt%ttit%%XXXX$$ti:::,tttXXX$$$$$XX$X$XXX%%t;%$%:%XXXXXXXXXXX%iiXtt;tti%ti:tti%%%%%%%;.., ,::,,;;:Xi,i%%%titiiiii,XXX$@@$$XXX$XXXXtttttttit%tX$
X%%%%%%%t%tittt%%XXXX$$iii::,it%%XXX$$%$$XX%$$%tt%tt%%%XXXXXXXX%%%%%%;;%%%:%Xttti:t%t%%%%%%%%t,..;,iti;::i,.ittttiiiiii;,t%XXX@$X$$$XXtttttiiiii%tiit$
$XX%%%%%t%t%%XXXX$$$$$$;ii;;,:tttXXXXXXX$$%XXXX;,;iitt%XXX%%%t%%%%ttt:,tii%Xtttt.it%tt%tt%%%%t%; ;t::;;;;:ittit%ttiti;ii;,%%XXX@$X%%%%%ttittittiiiiii$
```
specify threshold: ./galImage2AsciiExec -p 9.jpg -w 75 -h 82 -t 0.3
```text
####@####@@@@@@@@@@@@@@@% : :;@@@@@@@@@@@@@@@@@@###########################
@@#@@###@@@@@@@@@@@@@@@@      ;iiX@@@@@@@@@@@@@@##@@#@@@@@@#@@@##@####@#@@@
@@@@@@@@@@@@@@@@@@@@@@@@: :::;;;iiit@@@@@@@@@@@@@@@@@@##@#@@@@@@@@@@@@@@@@@
@@#@#########@@@@@@@@@@$::::;;;;;;;;iX@@@@@@@@@@@@@######@######@#@@#####@@
####@#@@@###@@@@@@@@@@@i:::;;;;;;;iit;i@@#@@@@@@@@@@@@@@#@@@@@@#@@####@#@@@
@@@@@@@@@@@@@@@@@@@@@@@:;: : :;;;iiittiii@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
##@@@@@#########@@@@@@@;;;  ;;:::;iitti;t;@@@@@tiiiiii;;:%@@@@@###@@#######
@@@@@@@@@@#@@@@@@@@@@@t;;;i;i; :::;:::  ;:ii;itt$Xttii;;i;;;:$@@@@@@@@@@@@@
@@##@@@@@@@@##@#@@@@@@ :;;; :ttttt%t%iiitt;::$%%$Xti;;:;;;;:;;:i@@@@@@@@###
@@@#@#@@$@@@##@@@#@@@@ :;;;tXttttt:;;;iitttt;;XXXXX;tii::;:::::  ;@@@@@@##@
@@@#@###@@@######@#@@:   i$%$Xi:t%i%%t%%tt%%%;i$iXXti;iii;::: : : :i@@@@@##
@@@###@@@@@#@@@#@@#@@:  :%XXXXtX%XXX%%%%%%%t%%itXX%$X;iXX%i; :  :   :@@@@@@
@@@@##@@@@#@#@@##@@@@  XX$XXiXXXXXXX$XXXXXX%%%%;%%XXXX%XXX;;:         @@@@@
@@@@###@@@##@@@####@X ;X$$$$%X%XXXXX$XXXXXX%%%%tt%X%$%%XXX;;:;        $@@@@
@@@@@@@@@@@@@@@#@@#@:iXXX$$%$XX$X$XX$XXXXXX%%%%ti%t%$tt%%%: ::       @@@@@@
@@@#####@#@@###@@@@@;$$$$$$X$X$$X$$XX$X$XXXX%%%%i%X$%;tt%;   :     ;@@@@@@@
@@@#######@@@@@@@@@@XX$$$$$X$$%$$$$$X$$XXXXXXXX%ti$$$X%i%X%:      $@@@@@@@@
@@@@@@#@##@@@@@@@@@$@$X$@$X$$$$$$$$$$$XX$$XXXX%%%ii%$%X%tXXi:    %@@@@@@@@@
@@@@#@@#@@@@@@@@@@@X$@X$$$X$$$$$$$$$$$$$XXXXXXX%%%%%iXX%%tt$t:   @@@@@@@@@@
@@@#@@@@@@@@@@@@@@$$XX$$$X$$$$$X$$$$$$$$XXXXXX%%XX%%tX%t%tti;:  @@@@@@@@@@@
@@@##@@@@@@@@@@@@$X$XX$$XX$$$$$$$$$$$$X$$XXXX%X%%%%%%%tiii%%: i@@@@@@@@@@@@
@@@##@@@@@@@@@@@$Xt$XX$$$%$X$XX$$$$$$$XX$XXXXXX%t%X%ti%it%%X%  @@@@@@@@@@@@
@@@###@@@@@@@@@$%XtX%X$$$X$$$$X$XX$$XXXXXXXXXXX%XX%%tiitX%%%;  @@@@@@@@@@@@
@@@@@@@@@@@@@@@@%%tX%X$X$X$$$$XXXXXXXXXXXXXXXXXtX%X%%t%ttiti  i@@@@@@@@@@@@
@@@#@@@@@@@@@@@ %$%XXX$X$X$$$XX%$$XXXXXXXXXXXXXXt%XXtt%t%%ii:itt$@@@@@@$@@@
@@@@#@@@@@@@@@:%%X%XXXXXXX$XX$$%XXXXXXXXXXXX%XXX%%XitXt%%ti;iitiiiX@@@@@$@@
@@@@@@@@@@@@@::t%XtXXXXXXX$XXXXXXXXXXXXXXXXXXXXXXt%%itit%t;t;ttiiiii$@@@@@@
@@@@@@@@@@X@;:X%%X%XXXXXXX$XXX$XtXXXXXXXXXXXXXXXXXtX:iii%it;itttt$%i;;itX%;
@@@@@@@@%@@;::t%XX%XXXXXXXXXXXXXtXXXXXXXXX%XXXXXX%%%Xitti%%:titttt$@@$@@$@@
@@@@@$%@@tt; XitX%%XXXXXX%XXXXXX%%XXXXXXXXXXXXXXXX%%XXtt%%%% ittii$@@@@@@@@
@@@@@@$%%t;;tittX%tXXXXXX%XXXXXXX$XX$XXXXXXXXXXXXXX%XX%X%%%t ;itti;@@@@@@@@
@@@@@@tt%itiii%iX%t%XX%XXX%%%XXXX$XX$XXXXX%X%X%XXXXX%XX%%%%%t ittti%@@@@@@@
@@@@@@@%%%iX%t%i%%t%XXXXXX%XX%XXXX$XXXXXX%X :iXXXXXX%%XX%X%%ttti;ii@%X@@$@@
@@@@@@@@%itiiti$@%%%XXXXXX%XXt%X%%@@XXXX%% ;  ;iiXXXX%%X%%%%titt ;tt@X@@@$@
@@@@@@@@@iiiitt%%X%%%X%X%Xi:i it%%$@@XXX%:    : i%tt%%tt%X%%%tti; ;i@@X@@@@
@@@@@@@@@iii;itt%%tX%X%XXi:     X$$@@@$@$Xit;i:;tXXt%ttXXXX%%t%i;  ii;@X@@@
@@@@@@@@@X;;i;ii%%%%%XX%%ti  : ;t@@@@@@@@@%$X%XttXXtX%tXXXXXt%tiii i:t:i%@@
@@@@@@@@@Xi;;iiit%Xt%XXt%ti;tt;X@@@@@@@@@@@%tit%iXX%XX%%X%tXXtt;ii;t: ;t:it
@@@@@@@@@@@i;iiit%%%%XX$i%t%;XXt@@@@@@@@@@@@$$$XttiXXX%X%%Xti%%i;iitit i;:@
@@@@@@@@@@@X%;i:tt%t%tX%%t%ttt$@@@@@@@@@@@@@@$$t%tt%XXXXXXtX%%i%%t; i;i :%@
$$@@@@@@@@@Xt;; tttt%t%Xi%%%%$@@@@@@@@@@@@@@@@@t$ti%X%X%%%tti%tii%;;:i:; @@
@@@@@@@@$%@X%::iti%tt%t%%ti%%%@@@@@@@@@@@@@@@@$$$ttt%XX%X%ttii%%;:i;t;::%t@
X@@$@@@@X@t%XX;tt;t%tt%%X%$ti%$$@@@@@@@@@@@@@@$$@X@X%XX@Xtt;%%;%it;ii:;%@@i
@@@@$@@%@$$@XX;ti;tttt$@%%X@%X%@@@@@@@@@@@@@@X@@$X@t%XX$@%%tiit%:t;i;t@@@@@
@$@@@X@@@@$@i@%it;tti;$%@%%%X%$@@@@@@@@@@@@@X@@@$@$X%XXX$$tiii;t%;i;iit@@@@
@@@@@$$%$@$@X@;;itiiit%$$$%%t%t$@@@@@@@@@@@$@$@@$@%%XXXXXX%ittii t%iiit$@@@
@@$@@@$%t@$@X$;itii;;:XX%$$%ttt%$$@@@@@@@itX$$@@@$t$XX%XXXitttti;;tiiii%@@@
@@@@@@@;ii$$$$itti;ti;t@$$$$$%%%XXiiX@@i%%XX$XX$@$$$%X%X$%Xiiitti;ii;:ii@@@
@@@@@@@i;%%$$$t;:i;;%%%@t$$$$$$%tXt$%%%%XXX$XXX$X@$X%%%XXXi%%iiitt;it;ttt@@
@@@$$@ttitt%$X$$%%tiit@@@@@@@$@@Xi $$X%XXX;$%@XXX$@Xt%X$X%ti%%Xtt%it;tttt@@
@@@%X%ittit@X$@$%it:%X$@@$%XX$$%;X  t      $X$$XXX@$$X%X@X%;tii%t%t;;iiti$@
@@@@t%@$$$@X@$$@$%X%XiiX@$@@@%%X;X$;:     tt$t@X%%X$@@$%@@@X;;%X%t%tiiiittt
@@@@tXX@@@X$@@@@$Xit%%%@X@@@@@@Xt;X$$$XXX$X%;XX$%$@%@@@@%@@@@@@@@@@@%iitt%@
@@@@@$$$$X@$@@@@XX%X%%%$@@@@@@@@$$tt$$X$X$XtX$$XX%@@@@@@@@@@@@@@@@@@$@@@%i@
@@@@@%@$$$X@@@@@XX%t%i@$@@@@@@@@X@@XitX$XXXXXXXX%%XX@@@@@@@@@@@@@@X$$@@X@@$
@@@@@$X$t@@@X@$$; ::@X%@@@@@@@@@$@@X@$tii%%XX%i t$@@@$@@#####@@$t$$$@%X@@$$
@$@@@@@$$@@@$X;$  t%$tX$@@@@@@$@@@$XX@;%% %%:   %$$@@@@@@@@@@@X$@@$@X$@@@$$
$$@@@@@@$@@@@$@;%ttXiXXX@@@@@@@@@ ::;::        X%@@@@@$@@@@@X$@@@$$X$%@@@@$
$@@@@@@@@X@@@$X%i@%XtX%X@@@@@@@@@ :::;; ::  ;:XXt@@@@@@X@@t@@@$@$$$$t@@@@@$
@@@@@@#@@@X$$$%:it;X%tX$X$@@@$@@@ :: ;;  ;:  ttiiX@$@@@$$X$@@@X@@$$%@@@@@@$
@@@@@@@@#@@XX@$@;@ %%XXX$$@@$$@@$ ::;i   t ;  ;;;X@@@@@$$$@$@@@$$$%@@@@@@@$
#@@@@@@@@@@@$XX@$$i@%;i$$X$$X$@$$   ;  i %  ::  ;i@$$$@@@$@@$X$$$$@@@@@@@@@
##@@@###@@@@@@%%%t:;:iiX$X%$$$@XX  :  ;;;%ii;::   $@@@@@@@X@$$X$@@@@@@@@@@@
@@@$@@@@@@@@@@$X$;;i;i:tiXXX$$$%X    ;;;%  :;:;;it$$@$@@@@$tX@@@@@@@@@@@@@@
@@@@@@@@@@@#@@$$XXtX;$ti%X%$$$XXi t::;:;tt%t;:;;;;:$@@X@@$@@$@@@@@@@@@@@@@@
@@@@@XX$$X$@$$$$$t$t%%Xtttt$$$%$Xt;:;;:i%i$%;;:;;;;X@@@@@@$@$X@@@@@@@@@@@@@
@@@$@@@@@@@@$$@@@$%%$Xitti%$$$$%Xt ::::i%;@XX;::i%tX$$$$@@@$$X%@@@@@@@@@@@$
@$@@@@@$@$$$X@@$@@@;X$tX%t%$XX$X$%%i;;;i%$@$%: i%$$XXX$X@@$X%i$X$@@@@@@@@@$
$$@$@@$@@@X$@X@@@@@@$$$it;i%$$%$$$@$%X:iX@@@XXit$$$$$@$$tXXX%t%%ti@@@@@@@$$
t%%%%$$$$@@@@$$@@@@@$XXXXt i$$i%t%t$t$i:$@@%%%X%%$$$$tti%XX$XX%t%%t@@@@$@$$
X$$$@@@@@@@XX@@@@$@@@$X$X%: iiiX%XX$XX%$X@tiX%%%X%%%tX%tit%%ti%%%it@@$@@@@@
X$$$$$@$@@@$$$@@@@@@$X$X$X  i;iiX@@@@@X$X@@@$%@@@@@@%XXX%iX%%tt%%$@@$$$$@@@
XXXXX$$$@@@$$@@X@@@@@$$$XX  :t%X%@@@@@@@@@@@@@@@@@@@@@@@$t%X%Xt%%X@@$$$$$$$
t%%XXX$$@@@@X@X@@@@$@@$@$% ::itX%$X$@i@@$@@@@$@@@@@@@@@@$$XXX%XtX@@@$$%XX$$
ttttt%Xi$@$$X$@@@@@@@@@$$%t ;;t%t%X@t%%XX%@$@X@@@@@@t$@$@@t@XX$@%$@@@$X$$$$
%ittt%% t@%;iX@$@@@@$@@$@Xi i$@itt%X@%$Xi itt$$$$$$$ $@@@@$@@$X$@@@@@@$$@$$
ttitt%%@$X    @@@@@$$X@$@%;  %$XXt%tX%@@$  iti;ttttti$X@@@$@@@@$@$$$XX%$$@$
iititt%$$::   X@@@@@$@X@$ti   t$$X%t$%%X$;;  ;;itt; tX$@$$$ :@@@$$XX%%XXX@@
iiiittXX%t;  :i%@@@$$@@@$t; ;XXX$Xtt$X$@%;::  :;;   %X@$$$$t $@$$XX%%%XXX@@
iiitt%X%iX$;;:i$$@@$$$$X$t X$X$$$Xtt$%$@ti$@:  :    t%%$$$%t;$$X$XX%Xtt%tii
%tttt%tt%X$$;: t@$@$X$$X%t%$%XXXXX%itiiiii%X i      ;:iiX%ti X@$XX%X%Xttitt
X%%%tttt%XX$i: t%X$%$X$%tt%%XXXX%%%;%:Xtitt%%%%   t;: ittiii %X@X$Xtttii%it
```
specify invert: ./galImage2AsciiExec -p 9.jpg -w 75 -h 82 -i
```text
                        :%%%%t                                             
                        %%XX%%tii,                                         
                        %%%%%tttiii;                                       
                       .%%%%tttttttti,                                     
                       i%%%tttttttii;ti                                    
                       %t%%%X%tttiii;;iii                                  
                       ttt%Xtt%%%tii;;it;t     ;iiiiiitt%:                 
                      ;tttitit%%%%t%%%XXt%iiti;;.,;;iittittt%.             
                      X%tttX%;;;;;:;:iii;;t%%.::.,;itt%tttt%tt%i           
        .             X%ttt;,;;;;;%tttii;;;;tt,,,,,t;ii%%t%%%%%%%t         
                     %XX%i.:.,i%;:i::;::;;:::ti.i,,;itiiit%%%%%%%X%i       
                     %XX%:,,,,;,:,,,:::::::;::i;,,:.,ti,,:it%%%X%%%X%      
                     XX,,.,,i,,,,,,,.,,,,,,::::t::,,,,:,,,tt%X%%X%%XXX     
                    ,%t,....:,:,,,,,.,,,,,,::::;;:,:.::,,,tt%tXXXXXXXX.    
                    %i,,,..:.,,.,.,,.,,,,,,::::;i:;:.;;:::%X%%%XXXXXX      
                    t......,.,..,..,,.,.,,,,::::i:,.:t;;:t%%X%X%XXXt       
                    ,,.....,..:.....,..,,,,,,,,:;i...,:i:,:%XX%XXX.        
                   . .,. .,...........,,..,,,,:::ii:.:,:;,,i%XXXX:         
                   ,. ,...,.............,,,,,,,:::::i,,::;;.;%%%X          
                  ..,,...,.....,........,,,,,,::,,::;,:;:;;it%%X           
                 .,.,,..,,............,..,,,,:,:::::::;iii::%Xi            
                .,;.,,...:.,.,,.......,,.,,,,,,:;:,:;i:i;::,:$X            
               .:,;,:,...,....,.,,..,,,,,,,,,,,:,,::;ii;,:::tXX            
                ::;,:,.,.,....,,,,,,,,,,,,,,,,,;,:,::;:;;i;iX%i            
               %:.:,,,.,.,...,,:..,,,,,,,,,,,,,,;:,,;;:;::ii%i;;.      .   
              %::,:,,,,,,,.,,..:,,,,,,,,,,,,:,,,::,i;,;::;itii;iii,     .  
             %%;:,;,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,;::i;i;:;t;t;;iiiii.      
          , t%,::,:,,,,,,,.,,,.,;,,,,,,,,,,,,,,,,,;,%iii:i;ti;;;;.:itti;,:t
        :  t%%;:,,:,,,,,,,,,,,,,;,,,,,,,,,:,,,,,,:::,i;;i::%;i;;;;.  .  .  
     .:  ;;t%,i;,::,,,,,,:,,,,,,::,,,,,,,,,,,,,,,,::,,;;::::Xi;;ii.        
      .::;tt;i;;,:;,,,,,,:,,,,,,,.,,.,,,,,,,,,,,,,,:,,:,:::;Xti;;it        
      ;;:i;iii:i,:;:,,:,,,:::,,,,.,,.,,,,,:,:,:,,,,,:,,:::::;Xi;;;i:       
       :::i,:;:i::;:,,,,,,:,,:,,,,.,,,,,,:,%%i,,,,,,::,,:,::;;;itii :,  .  
        :i;ii;i. :::,,,,,,:,,;:,::  ,,,,::Xt$Xtii,,,,::,::::;i;;Xt;; ,   . 
         iiii;;::,:::,:,:,i%i$i;::.  ,,,:%XXXX%%i:;;::;;:,:::;;itXti  ,    
         iiiti;;::;,:,:,,i%$XXX%,..   . .,i;ti%t;,,;:;;,,,,::;:itX%iit ,   
         ,ttitii:::::,,::;iXX%Xt;         :.,:,;;,,;,:;,,,,,;:;iii%i%;%i:  
         ,ittiii;:,;:,,;:;it;;t,           :;i;:i,,:,,::,:;,,;;tiit;%%t;%i;
           itiii;::::,,.i:;:t,,;            ...,;;i,,,:,::,;i::itii;i;Xit% 
           ,:ti%;;:;:;,::;:;;;.              ..;:;;:,,,,,,;,::i::;tXitiX%: 
..         ,;ttX;;;;:;:,i::::.                 ;.;i:,:,:::;;i:;ii:tt%i%tX  
        .: ,:%%i;i:;;:;::;i:::                ...;;;:,,:,:;;ii::t%it;t%%:; 
,  .    , ;:,,t;;t;:;;::,:.;i:..              .. , ,:,, ,;;t::t:i;tii%t:  i
    .  : .. ,,t;it;;;;. ::, :,:              ,  ., ;:,,. ::;ii;:%;tit;     
 .   ,    . i :i;t;;it.: :::,:.             ,   . .,:,,,..;iiit;:titii;    
     ..:. . , tti;iii;:...::;:;.           . .  . ::,,,,,,:i;;ii%;:iii;.   
  .   .:; . ,.ti;iitt%,,:..:;;;:..       i;,..   .;.,,:,,,i;;;;itt;iiii:   
       tii....i;;it;it; .....:::,,ii,  i::,,.,,. ...:,:,.:,iii;;itiit%ii   
       it::...;t%itt::: ;......:;,;.::::,,,.,,,., .,:::,,,i::iii;;ti;t;;;  
   .. ;;i;;:.,..::;ii;       .  ,iX..,:,,,t.: ,,,. ,;:,.,:;i::,;;:i;t;;;;  
   :,:i;;i; ,. .:i;%:,.  .:,,..:t,$%;$X$$XX.,..,,, ..,:, ,:t;ii:;:;ttii;i. 
    ;: ... , .. .:,:,ii, .   ::,t,.t%$XXXX;;.; ,::,.  .:   ,tt:,:;:;iiii;;;
    ;,,   ,.    .,i;::: ,      ,;t,...,,,.,:t,,.:. :    :           :ii;;: 
     ...., .    ,,:,:::.        ..;;..,.,.,;,..,,:                  .   :i 
     : ...,     ,,:;:i .        ,  ,i;,.,,,,,,,,::,,              ,..  ,  .
     .,.;   , ..t%%% ,:         .  , .;ii::,,:i%;.   .         .;... :,  ..
 .     ..   .,t.XX;:.;,.      .   .,, t::X::%X%X:..           ,.  . ,.   ..
..      .    . t:;;,i,,,         X%%t%%XXXX%%%X,:     .     ,.   ..,.:    .
.        ,   .,:i :,;,:,         X%%%ttX%%X%t%,,;      ,  ;   . ....;     .
          ,...:%i;t,:;,.,.   .   X%%XttXXt%X%;;ii, .   ..,.   ,  ..:      .
           ,, . t X::,,,..  ..  .X%%tiX%X;%t%$ttt,     ... .   ...:       .
            .,, ..i :ti..,..,. ..XX%tX%iX:X%%%$Xti ...   .  .,....         
              :::;%t%ii,.,:... ,,X%%XXttt:iit%%X%X.       , ..,.           
   .          .,.ttiti%;i,,,...:,XXXXttt:XX%t%tti;.. .    .;,              
              ..,,;,t.;i:,:...,,iX;%%t%t;;:;t%tttt%.  ,  .  .              
     ,,..,. .....;.;::,;;;;...:.,;t%tt%i:i.:tt%tttt,      . .,             
   .        ..   .::.,i;;i:....:,;%%%%%i:t ,,t%%i:;,....   ..,:           .
 .     . ...,  .   t,.;,:;:.,,.,.::ittti:. .:%%i:..,,,.,  .,:i.,.         .
.. .  .   ,. ,      ...i;ti:..:... .:,%i,   ,,i;..... ..;,,,:;::;i       ..
;::::....    ..     .,,,,;$i..i:;:;.;.i%.  :::,::....;;i:,,.,,:;::;    . ..
,...       ,,    .   .,.,:%Xiii,:,,.,,:., ;i,:::,:::;,:;i;::;i:::i;  .     
,..... .   ...      .,.,.,$Xitii,     ,.,   .:      :,,,:i,::;;::.  ....   
,,,,,...   ..  ,     ...,,$%%;:,:                       .;:,:,;::,  .......
;::,,,..    , ,    .  . .:X%%i;,:.,. i  .    .          ..,,,:,;,   ..:,,..
;;;;;:,i. ..,.         ..:;%tt;:;:, ;::,,: . ,      ;. .  ; ,,. :.   .,....
:i;;;::X; :ti, .    .  . ,i$i. i;;:, :.,i$i;;.......X.    .  .,.      .. ..
;;i;;:: .,X$$$     .., . :tX%:.,,;:;,:  .X%i;it;;;;;i.,   .    . ...,,:.. .
ii;i;;:..%%XX%,     . , .;i$XX;..,:;.::,.tt$$tti;;t$;,. ...$%   ..,,::,,,  
iiii;;,,:;t%%%i:   ..   .;tXt,,,.,;;.,. :t%%XX%tt%$X:, ....;X. ..,,:::,,,  
iii;;:,:i,.tt%i..  ....,.;$,.,...,;;.:. ;i. %XX%%X$$;::...:;t..,.,,:,;;:;ii
:;;;;:;;:,..t%%; . .,..,:;:.:,,,,,:i;iiiii:,XiX$@$$$t%ii,:;iX, .,,:,:,;;i;;
,:::;;;;:,,.i%X;:,.:.,.:;;::,,,,:::t:%,;i;;::::X$X;t%Xi;;iiiX:, ,.,;;;ii:i;
```
specify threshold and invert: 
```text
                        :%%%%t                                             
                        %%XX%%tii                                          
                        %%%%%tttiii;                                       
                        %%%%tttttttti                                      
                       i%%%tttttttii;ti                                    
                       %t%%%X%tttiii;;iii                                  
                       ttt%Xtt%%%tii;;it;t     ;iiiiiitt%:                 
                      ;tttitit%%%%t%%%XXt%iiti;;  ;;iittittt%              
                      X%tttX%;;;;; ;:iii;;t%% ::  ;itt%tttt%tt%i           
                      X%ttt; ;;;;;%tttii;;;;tt     t;ii%%t%%%%%%%t         
                     %XX%i :  i%; i  ;::;;:::ti i  ;itiiit%%%%%%%X%i       
                     %XX%:    ;        ::::;::i;     ti  :it%%%X%%%X%      
                     XX     i               :::t:     :   tt%X%%X%%XXX     
                     %t                    ::::;;:    :   tt%tXXXXXXXX     
                    %i                     :: :;i:;: ;;:::%X%%%XXXXXX      
                    t                          :i:   t;;:t%%X%X%XXXt       
                                                ;i    :i   %XX%XXX         
                                              :::ii: :  ;  i%XXXX:         
                                                 :: i  ::;; ;%%%X          
                                               :   :;  ;:;;it%%X           
                                                 :::: ;iii::%Xi            
                  ;                             ;   ;i:i; : :$X            
                  ;                            :  : ;ii; :::tXX            
                ::;                            ; : ::;:;;i;iX%i            
               %: :                             ;:  ;;:; :ii%i;;           
              %   :            :                :: i; ;::;itii;iii         
             %%;: ;                              ;::i;i;:;t;t;;iiiii       
            t%    :             ;                 ; %iii:i;ti;;;; :itti;  t
           t%%;:  :             ;         :          i;;i::%;i;;;;         
      :  ;;t% i;  :      :      ::                 :  ;;: ::Xi;;ii         
       ::;tt;i;; :;                                     :: ;Xti;;it        
      ;;:i;iii:i :;:                      : :          ::: :;Xi;;;i:       
        ::i :;:i :;       :              : %%i       :    ::;;;itii :      
        :i;ii;i  :::         ;:         ::Xt$Xtii    ::  :::;i;;Xt;;       
         iiii;;    :: :   i%i$i;::       %XXXX%%i ;;::;;  :::;;itXti       
         iiiti;;: ;   :  i%$XXX%          i;ti%t;  ;:;;    ::;:itX%iit     
          ttitii:::    ::;iXX%Xt;         :  : ;;  ; :;     ;:;iii%i%;%i:  
          ittiii;: ;   ;:;it;;t             ;i;:i     :: :;  ;;tiit;%%t;%i;
           itiii;:::    i:;:t  ;                ;;i     :: ;i::itii;i;Xit% 
            :ti%;;:;:; ::;:;;;                 ; ;;:      ;  :i::;tXitiX%  
            ;ttX;;;;:;  i:  :                  ; ;i:    ::;;i:;ii:tt%i%tX  
            :%%i;i:;;:;  ;i ::                   ;;;:    :;;ii::t%it;t%% ; 
          ;:  t;;t;:;;::   ;i:                      :    ;;t :t:i;tii%t:  i
       :      t;it;;;;      : :                    ;:     :;ii;:%;tit;     
            i  i;t;;it : : : :                      :     ;iiit;:titii;    
              tti;iii;:   : ; ;                   :        i;;ii%; iii;    
       :;     ti;iitt%  :   ;;;:         i;       ;       i;;;;itt;iiii:   
       tii    i;;it;it;      :::  ii   i::          :    : iii;;itiit%ii   
       it :   ;t%itt: : ;      :; ; ::::              :   i::iii;;ti;t;;;  
      ;;i;;     : ;ii;           iX   :   t :       ;:   :;i:: ;;:i;t;;;;  
   :  i;;i;     :i;%:           t $%;$X$$XX           :   :t;ii:;:;ttii;i  
    ;              : ii         t  t%$XXXX;; ;   :     :    tt: :;:;iiii;;;
    ;             i;: :         ;t         :t      :    :           :ii;;: 
                  : :::           ;;       ;     :                      :i 
     :            :; i              i;          ::                         
        ;       t%%%  :               ;ii::  :i%;               ;    :     
              t XX;  ;                t :X::%X%X:                          
               t:;; i            X%%t%%XXXX%%%X :                    :     
               :i : ;            X%%%ttX%%X%t%  ;         ;         ;      
              :%i;t :;           X%%XttXXt%X%;;ii                          
                t X:             X%%tiX%X;%t%$ttt                 :        
                  i :ti          XX%tX%iX:X%%%$Xti                         
              :: ;%t%ii          X%%XXttt iit%%X%X                         
                 ttiti%;i      : XXXXttt:XX%t%tti;         ;               
                  ; t ;i        iX;%%t%t;;:;t%tttt%                        
                 ; ;   ;;;;   :  ;t%tt%i:i  tt%tttt                        
                  :   i;;i:      ;%%%%%i:t   t%%i:;           :            
                   t  ; :;        :ittti:    %%i:           :i             
                       i;ti   :     : %i      i;        ;   :;: ;i         
;:                       ;$i  i ; ; ; i%       ::    ;;i      :;  ;        
                         :%Xiii :         ;i : : : :; :;i;  ;i:::i;        
                          $Xitii             :          :i ::;;:           
                          $%%;:                          ;    ;::          
;:                        X%%i; :    i                         ;           
;;;;;: i                 :;%tt;:;:  ;::             ;     ;                
:i;;;: X;  ti             i$i  i;;:  :  i$i;;       X                      
;;i;;::   X$$$           :tX%:   ;:;     X%i;it;;;;;i                 :    
ii;i;;:  %%XX%           ;i$XX;   :;  :  tt$$tti;;t$;      $%       ::     
iiii;;   ;t%%%i          ;tXt     ;;    :t%%XX%tt%$X:      ;X       ::     
iii;;  :i  tt%i          ;$       ;; :  ;i  %XX%%X$$;::   :;t        ;;:;ii
:;;;;:;;:   t%%;         ;:        i;iiiii: XiX$@$$$t%ii :;iX         ;;i;;
 :: ;;;;    i%X;       :;;::     ::t:% ;i;;::::X$X;t%Xi;;iiiX      ;;;ii i;
```
