#include<stdio.h>

int main()
{

int A[1002]={1,1,4,5,16,22,64,93,256,386,
1024,1586,4096,6476,16384,26333,65536,106762,262144,431910,
1048576,1744436,4194304,7036530,16777216,28354132,67108864,114159428,268435456,459312152,
73741817,846943446,294967268,423131433,179869065,822170515,719476260,766320739,877905026,832546118,
511620083,894304829,46480318,43486140,185921272,656507563,743685088,685641487,974740338,646704228,
898961331,533184316,595845303,485680833,383381198,493152591,533524785,922514481,134099126,899693577,
536396504,74161682,145586002,234061185,582344008,424554483,329376018,624108132,317504065,955555026,
270016253,915523034,80065005,803957493,320260020,181944294,281040073,597447726,124160285,388022511,
496641140,155031403,986564553,88613745,946258191,790944069,785032743,168393178,140130951,558091480,
560523804,437677665,242095202,588300862,968380808,598865500,873523211,613335298,494092823,218689621,
976371285,140228911,905485119,746012324,621940455,307255236,487761806,41488553,951047217,127191850,
804188847,572156778,216755367,219722568,867021468,817296760,468085851,978229267,872343397,78181789,
489373567,514907649,957494261,203625405,829977023,710100448,319908071,307584699,279632277,117484371,
118529101,937870220,474116404,88770048,896465609,203887919,585862415,180451477,343449646,350128001,
373798577,86054848,495194301,529262235,980777197,6394853,923108767,483826970,692435047,251638283,
769740174,325848701,78960675,347904710,315842700,643157723,263370793,660948035,53483165,815436966,
213932660,9686838,855730640,658702929,422922539,419215516,691690149,401305616,766760582,487153625,
67042307,810157923,268169228,937733439,72676905,491811120,290707620,420133069,162830473,728560762,
651321892,740552927,605287554,735300624,421150202,532068597,684600801,283811222,738403190,526516260,
953612746,959196076,814450963,825403446,257803831,909848430,31215317,217287822,124861268,546054142,
499445072,742705041,997780281,524862992,991121103,894999485,964484391,81675660,857937543,819032036,
431750151,236445916,727000597,452831406,908002374,422458388,632009475,697054579,528037886,380344924,
112151530,209230693,448606120,247906203,794424473,29665620,177697871,795139385,710791484,155518499,
843165922,454247520,372663667,718393223,490654661,941825999,962618637,616707055,850474527,871970379,
401898087,55302627,607592341,922005489,430369350,798480134,721477393,872344045,885909558,90505928,
543638211,309346143,174552830,911052763,698211320,276055605,792845266,811514930,171381043,11816245,
685524172,540867210,742096674,115441267,968386682,805656079,873546707,955924558,494186807,124308115,
976747221,201115774,906988863,516176651,627955431,358877622,511821710,304532541,47286826,985546032,
189147304,43021372,756589216,951455539,26356843,107384688,105427372,956557214,421709488,988357078,
686837945,389798998,747351766,164418797,989407050,770246604,957628179,332108108,830512695,682874404,
322050759,247764499,288203029,825220324,152812109,349916383,611248436,386103289,444993730,213269838,
779974913,425857780,119899631,106413173,479598524,528606947,918394089,843114447,673576335,722378691,
694305326,251313180,777221290,327935400,108885139,529244750,435540556,503424422,742162217,563608668,
968648854,518539669,874595395,330670736,498381559,839570084,993526229,620495619,974104895,592177249,
896419559,209130414,585678215,157262450,342712846,883547998,370851377,60650332,483405501,581813358,
933621997,377082937,734487967,994096276,937951854,273855636,751807395,845166096,7229559,587980461,
28918236,251661925,115672944,510012252,462691776,659954284,850767097,207919611,403068367,912690494,
612273461,230261374,449093830,396920204,796375313,295141099,185501231,940327458,742004924,471106388,
968019682,936916681,872078707,955990899,488314807,313996385,953259221,716425054,813036863,939444750,
252147431,458662946,8589717,738668344,34358868,816072463,137435472,80899330,549741888,305537036,
198967538,90744621,795870152,445227895,183480587,481862432,733922348,63578134,935689378,941183434,
742757491,851434641,971029950,996405990,884119779,360101376,536479095,32827869,145916366,398360338,
583665464,109019279,334661842,927193267,338647361,236868165,354589437,73084117,418357741,312207117,
673430957,855536876,693723814,597182738,774895242,1485659,99580947,426475103,398323788,40197553,
593295145,945916462,373180566,200248470,492722257,231900716,970889021,559330931,883556063,934056578,
534224231,849793155,136896910,207266477,547587640,382281057,190350546,867228103,761402184,229899111,
45608715,112608605,182434860,217491391,729739440,592260655,918957746,649959003,675830963,848244140,
703323838,668429234,813295338,578680790,253181331,752100543,12725317,931031966,50901268,16581327,
203605072,187364489,814420288,453754199,257681131,972836431,30724517,26940171,122898068,197838308,
491592272,222637438,966369081,536384139,865476303,568087787,461905191,976470535,847620757,937460838,
390483007,967036804,561932021,565083139,247728070,497951365,990912280,94148004,963649099,54142418,
854596375,12453700,418385479,12435337,673541909,133650927,694167622,238954539,776670474,541582620,
106681875,518910992,426727500,706899323,706909993,695631921,827639958,189483636,310559811,70883945,
242239237,62108979,968956948,603659660,875827771,976834557,503311063,481872189,13244238,35079483,
52976952,726970401,211907808,895962351,847631232,986983842,390524907,544346137,562099621,644560564,
248398470,349833825,993593880,42995674,974375499,840645953,897501975,65867696,590007879,118678899,
360031502,763408387,440126001,840560161,760503997,48033496,42015967,118000001,168063868,671761633,
672255472,216167956,689021874,283684663,756087482,510393919,24349907,294183145,97399628,402625793,
389598512,220758650,558394041,982749932,233576150,85498255,934304600,793568901,737218379,201902975,
948873502,755399290,795493987,743094435,181975927,468001169,727903708,573649822,911614818,687146994,
646459251,467100137,585836990,887114570,343347946,613042810,373391777,202655784,493567101,748617416,
974268397,2564524,897073567,78310033,588294247,681524791,353176974,988203124,412707889,228413443,
650831549,332284008,603326182,553298713,413304714,936219467,653218849,553096890,612875382,858440508,
451501514,727226002,806006049,862694385,224024175,512093983,896096700,361454004,584386779,279758129,
337547102,37344131,350188401,687499199,400753597,366175588,603014381,825414271,412057510,147076228,
648230033,788777544,592920118,35891087,371680458,132283550,486721825,280569319,946887293,987082574,
787549151,817857114,150196583,601291336,600786332,430385161,403145314,965679486,612581249,766243959,
450324982,37945568,801299921,682124735,205199663,651105287,820798652,251968589,283194587,868989818,
132778341,403803235,531113364,713819679,124453442,615327721,497813768,499878191,991255065,857459129,
965020239,268709621,860080935,142050759,440323719,973824367,761294869,825995573,45179455,193677094,
180717820,608877502,722871280,400013165,891485106,654136106,565940403,747215790,263761598,945959850,
55046385,174747034,220185540,936721167,880742160,654726266,522968619,469081974,91874462,146199302,
367497848,604395821,469991385,169686030,879965533,881335288,519862111,475223525,79448430,227274914,
317793720,373206876,271174873,556927664,84699485,368935763,338797940,70867504,355191753,81344222,
420767005,530924271,683068013,958700354,732272038,874519549,929088138,929040876,716352531,321118869,
865410110,593579653,461640419,879025448,846561669,685648097,386246655,481418099,544986613,911414890,
179946438,730586355,719785752,302603551,879142994,62304368,516571955,362217377,66287806,145861325,
265151224,163687340,60604889,912457967,242419556,424103762,969678224,501354553,878712875,397407954,
514851479,287125504,59405902,203311078,237623608,46910977,950494432,413168459,801977707,634890641,
207910807,983850759,831643228,353196315,326572891,233438971,306291557,790496268,225166221,271095486,
900664884,581535242,602659515,531214560,410638046,579816564,642552177,132342773,570208694,162224233,
280834762,491154040,123339041,149237845,493356164,170958437,973424649,494668729,893698575,634539202,
574794279,641090410,299177102,654208705,196708401,652883937,786833604,798688068,147334395,800896733,
589337580,513653125,357350306,865955523,429401217,247787357,717604861,437980045,870419430,704287933,
481677699,769819418,926710789,601521901,706843135,182692315,827372526,14877717,309490083,984874956,
237960325,529331280,951841300,936747076,807365179,929076768,229460695,791764644,917842780,477138356,
671371099,873094239,685484382,934366049,741937514,178279888,967750042,152315839,871000147,180680292,
484000567,87681347,936002261,450864152,744009023,490311121,976036078,284696440,904144291,291819280,
616577143,117465182,466308558,624230363,865234225,270322731,460936879,29309591,843747509,925744276,
374990015,782626190,499960053,562126012,999840205,670101332,999360799,189668469,997443175,335602998,
989772679,218949826,959090695,281819634,836362759,765849667,345451015,481490614,381804053,836773048,
527216205,741508117,108864806,569152470,435459224,65468280,741836889,34445886,967347542,335388884,
869390147,760641459,477560567,116064252,910242261,111509951,640969023,535302626,563876078,703561614,
255504298,404049832,22017185,880040688,88068740,482402020,352274960,580754064,409099833,778862185,
636399325,786528713,545597286,152412585,182389130,241526794,729556520,42576585,918226066,639428602,
672904243,487113652,691616958,277002583,766467818,991300002,65871251,865165062,263485004,124270964,
53940009,692105475,215760036,732802693,863040144,105946642,452160555,438745798,808642213,196078337,
234568831,74112545,938275324,714910245,753101275,712762442,12405079,357362389,49620316,440337091,
198481264,81751218,793925056,287635812,175700203,445878798,702800812,718355353,811203234,722662796,
244812915,603956586,979251660,453595623,917006619,904763641,668026455,203941312,672105806,764293694};
int t,i,j,n;
int B[1002];
scanf("%d",&t);
while(t--){
 scanf("%d",&n);
 for(i=0;i<n;i++)  scanf("%d",&B[i]);
 printf("%d\n",A[n-1]);
 }
return 0;
}

