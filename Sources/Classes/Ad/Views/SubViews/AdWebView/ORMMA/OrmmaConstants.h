//
//  OrmmaConstants.h
//  AdMobileSDK
//
//  Created by Constantine Mureev on 8/29/11.
//

#define ORMMA_JS @"(function(){var a=window.ormmaview={},j={useBackground:!1,backgroundColor:\"#ffffff\",backgroundOpacity:1,lockOrientation:!1},b={},g=[],n=!1;a.fireAssetReadyEvent=function(o,f){var a=b.assetReady;if(a!=null)for(var i=0;i<a.length;i++)a[i](o,f);return\"OK\"};a.fireAssetRemovedEvent=function(a){var f=b.assetRemoved;if(f!=null)for(var d=0;d<f.length;d++)f[d](a);return\"OK\"};a.fireAssetRetiredEvent=function(a){var f=b.assetRetired;if(f!=null)for(var d=0;d<f.length;d++)f[d](a);return\"OK\"};a.fireChangeEvent= function(a){var f=b.change;if(f!=null)for(var d=0;d<f.length;d++)f[d](a);return\"OK\"};a.fireErrorEvent=function(a,f){var d=b.error;if(d!=null)for(var i=0;i<d.length;i++)d[i](a,f);return\"OK\"};a.fireShakeEvent=function(){var a=b.shake;if(a!=null)for(var f=0;f<a.length;f++)a[f]();return\"OK\"};a.nativeCallComplete=function(){if(g.length==0)n=!1;else{var a=g.pop();window.location=a;return\"OK\"}};a.showAlert=function(a){alert(a)};a.zeroPad=function(a){var f=\"\";a<10&&(f+=\"0\");f+=a;return f};a.executeNativeCall= function(a){for(var f=\"ormma://\"+a,b,i=!0,h=1;h<arguments.length;h+=2)b=arguments[h+1],b!=null&&(i?(f+=\"?\",i=!1):f+=\"&\",f+=arguments[h]+\"=\"+escape(b));n?g.push(f):(n=!0,window.location=f)};a.activate=function(a){this.executeNativeCall(\"service\",\"name\",a,\"enabled\",\"Y\")};a.addEventListener=function(a,f){var d=b[a];d==null&&(b[a]=[],d=b[a]);for(var i in d)if(f==i)return;d.push(f)};a.deactivate=function(a){this.executeNativeCall(\"service\",\"name\",a,\"enabled\",\"N\")};a.removeEventListener=function(a,f){var d= b[a];d!=null&&d.remove(f)};a.close=function(){this.executeNativeCall(\"close\")};a.expand=function(a,f){try{var b=\"this.executeNativeCall( 'expand'\";f!=null&&(b+=\", 'url', '\"+f+\"'\");typeof a.x!=\"undefined\"&&a.x!=null&&(b+=\", 'x', '\"+a.x+\"'\");typeof a.y!=\"undefined\"&&a.y!=null&&(b+=\", 'y', '\"+a.y+\"'\");typeof a.width!=\"undefined\"&&a.width!=null&&(b+=\", 'w', '\"+a.width+\"'\");typeof a.height!=\"undefined\"&&a.height!=null&&(b+=\", 'h', '\"+a.height+\"'\");typeof j.useBackground!=\"undefined\"&&j.useBackground!= null&&(b+=\", 'useBG', '\"+(j.useBackground?\"Y\":\"N\")+\"'\");typeof j.backgroundColor!=\"undefined\"&&j.backgroundColor!=null&&(b+=\", 'bgColor', '\"+j.backgroundColor+\"'\");typeof j.backgroundOpacity!=\"undefined\"&&j.backgroundOpacity!=null&&(b+=\", 'bgOpacity', \"+j.backgroundOpacity);typeof j.lockOrientation!=\"undefined\"&&j.lockOrientation!=null&&(b+=\", 'lkOrientation', '\"+(j.lockOrientation?\"Y\":\"N\")+\"'\");b+=\" );\";eval(b)}catch(i){alert(\"executeNativeExpand: \"+i+\", cmd = \"+b)}};a.hide=function(){this.executeNativeCall(\"hide\")}; a.open=function(a,b){var d=!1,i=!1,h=!1;if(b==null)h=i=d=!0;else for(var g=0;g<b.length;g++)if(b[g]==\"none\"&&g>0){self.fireErrorEvent(\"none must be the only navigation element present.\",\"open\");return}else if(b[g]==\"all\"){if(g>0){self.fireErrorEvent(\"none must be the only navigation element present.\",\"open\");return}h=i=d=!0}else b[g]==\"back\"?d=!0:b[g]==\"forward\"?i=!0:b[g]==\"refresh\"&&(h=!0);this.executeNativeCall(\"open\",\"url\",a,\"back\",d?\"Y\":\"N\",\"forward\",i?\"Y\":\"N\",\"refresh\",h?\"Y\":\"N\")};a.openMap= function(a,b){this.executeNativeCall(\"openMap\",\"url\",a,\"fullscreen\",b)};a.resize=function(a,b){this.executeNativeCall(\"resize\",\"w\",a,\"h\",b)};a.getExpandProperties=function(){return j};a.setExpandProperties=function(a){j=a};a.show=function(){this.executeNativeCall(\"show\")};a.playAudio=function(a,b){var d=\"this.executeNativeCall( 'playAudio'\";d+=\", 'url', '\"+a+\"'\";b!=null&&(d+=typeof b.autoplay!=\"undefined\"&&b.autoplay!=null?\", 'autoplay', 'Y'\":\", 'autoplay', 'N'\",d+=typeof b.controls!=\"undefined\"&& b.controls!=null?\", 'controls', 'Y'\":\", 'controls', 'N'\",d+=typeof b.loop!=\"undefined\"&&b.loop!=null?\", 'loop', 'Y'\":\", 'loop', 'N'\",d+=typeof b.position!=\"undefined\"&&b.position!=null?\", 'position', 'Y'\":\", 'position', 'N'\",d+=typeof b.startStyle!=\"undefined\"&&b.startStyle!=null?\", 'startStyle', '\"+b.startStyle+\"'\":\", 'startStyle', 'normal'\",d+=typeof b.stopStyle!=\"undefined\"&&b.stopStyle!=null?\", 'stopStyle', '\"+b.stopStyle+\"'\":\", 'stopStyle', 'normal'\");d+=\" );\";eval(d)};a.playVideo=function(b, a){var d=\"this.executeNativeCall( 'playVideo'\";d+=\", 'url', '\"+b+\"'\";a!=null&&(d+=typeof a.audio!=\"undefined\"&&a.audio!=null?\", 'audioMuted', 'Y'\":\", 'audioMuted', 'N'\",d+=typeof a.autoplay!=\"undefined\"&&a.autoplay!=null?\", 'autoplay', 'Y'\":\", 'autoplay', 'N'\",d+=typeof a.controls!=\"undefined\"&&a.controls!=null?\", 'controls', 'Y'\":\", 'controls', 'N'\",d+=typeof a.loop!=\"undefined\"&&a.loop!=null?\", 'loop', 'Y'\":\", 'loop', 'N'\",typeof a.position!=\"undefined\"&&a.position!=null&&(d+=\", 'position_top', '\"+ a.position.top+\"'\",d+=\", 'position_left', '\"+a.position.left+\"'\",typeof a.width!=\"undefined\"&&a.width!=null&&(d+=\", 'position_width', '\"+a.width+\"'\"),typeof a.height!=\"undefined\"&&a.height!=null&&(d+=\", 'position_height', '\"+a.height+\"'\")),d+=typeof a.startStyle!=\"undefined\"&&a.startStyle!=null?\", 'startStyle', '\"+a.startStyle+\"'\":\", 'startStyle', 'normal'\",d+=typeof a.stopStyle!=\"undefined\"&&a.stopStyle!=null?\", 'stopStyle', '\"+a.stopStyle+\"'\":\", 'stopStyle', 'normal'\");d+=\" );\";eval(d)};a.createEvent= function(a,b,d){var g=a.getFullYear(),h=a.getMonth()+1,j=a.getDate(),n=a.getHours(),a=a.getMinutes();this.executeNativeCall(\"calendar\",\"date\",g+this.zeroPad(h)+this.zeroPad(j)+this.zeroPad(n)+this.zeroPad(a),\"title\",b,\"body\",d)};a.makeCall=function(a){this.executeNativeCall(\"phone\",\"number\",a)};a.sendMail=function(a,b,d){this.executeNativeCall(\"email\",\"to\",a,\"subject\",b,\"body\",d,\"html\",\"N\")};a.sendSMS=function(a,b){this.executeNativeCall(\"sms\",\"to\",a,\"body\",b)};a.setShakeProperties=function(){};a.addAsset= function(a,b){this.executeNativeCall(\"addasset\",\"uri\",url,\"alias\",b)};a.request=function(a,b){this.executeNativeCall(\"request\",\"uri\",uri,\"display\",b)};a.removeAsset=function(a){this.executeNativeCall(\"removeasset\",\"alias\",a)}})();(function(){var a=window.ormma={},j=a.STATES={UNKNOWN:\"unknown\",DEFAULT:\"default\",RESIZED:\"resized\",EXPANDED:\"expanded\",HIDDEN:\"hidden\"},b=a.EVENTS={ASSETREADY:\"assetReady\",ASSETREMOVED:\"assetRemoved\",ASSETRETIRED:\"assetRetired\",ERROR:\"error\",INFO:\"info\",HEADINGCHANGE:\"headingChange\",KEYBOARDCHANGE:\"keyboardChange\",LOCATIONCHANGE:\"locationChange\",NETWORKCHANGE:\"networkChange\",ORIENTATIONCHANGE:\"orientationChange\",RESPONSE:\"response\",SCREENCHANGE:\"screenChange\",SHAKE:\"shake\",SIZECHANGE:\"sizeChange\", STATECHANGE:\"stateChange\",TILTCHANGE:\"tiltChange\",VIEWABLECHANGE:\"viewableChange\"};a.CONTROLS={BACK:\"back\",FORWARD:\"forward\",REFRESH:\"refresh\",ALL:\"all\"};var g=a.FEATURES={LEVEL1:\"level-1\",LEVEL2:\"level-2\",LEVEL3:\"level-3\",SCREEN:\"screen\",ORIENTATION:\"orientation\",HEADING:\"heading\",LOCATION:\"location\",SHAKE:\"shake\",TILT:\"tilt\",NETWORK:\"network\",SMS:\"sms\",PHONE:\"phone\",EMAIL:\"email\",CALENDAR:\"calendar\",CAMERA:\"camera\",AUDIO:\"audio\",VIDEO:\"video\",MAP:\"map\"},n=a.NETWORK={OFFLINE:\"offline\",WIFI:\"wifi\", CELL:\"cell\",UNKNOWN:\"unknown\"},o=j.UNKNOWN,f={width:0,height:0},d={x:0,y:0,width:0,height:0},i={width:0,height:0},h={\"level-1\":!0,\"level-2\":!0,\"level-3\":!0,screen:!0,orientation:!0,heading:!0,location:!0,shake:!0,tilt:!0,network:!0,sms:!0,phone:!0,email:!0,calendar:!0,camera:!0,audio:!0,video:!0,map:!0},u=-1,v=!1,q=null,s=n.UNKNOWN,w=-1,t=null,x=null,r=null,m={},A=-1,B=!1,y=null,C=0,E={x:function(c){return!isNaN(c)&&c>=0},y:function(c){return!isNaN(c)&&c>=0},width:function(c){return!isNaN(c)&&c>= 0},height:function(c){return!isNaN(c)&&c>=0}},F={useBackground:function(c){return c===!0||c===!1},backgroundColor:function(c){return typeof c==\"string\"&&c.substr(0,1)==\"#\"&&!isNaN(parseInt(c.substr(1),16))},backgroundOpacity:function(c){return!isNaN(c)&&c>=0&&c<=1},lockOrientation:function(c){return c===!0||c===!1}},G={intensity:function(c){return!isNaN(c)},interval:function(c){return!isNaN(c)}},H={state:function(c){o==j.UNKNOWN&&(y=window.setInterval(window.ormma.signalReady,20),e(b.INFO,\"controller initialized, attempting callback\")); e(b.INFO,\"setting state to \"+k(c));o=c;e(b.STATECHANGE,o)},size:function(c){e(b.INFO,\"setting size to \"+k(c));f=c;e(b.SIZECHANGE,f.width,f.height)},defaultPosition:function(c){e(b.INFO,\"setting default position to \"+k(c));d=c},maxSize:function(c){e(b.INFO,\"setting maxSize to \"+k(c));i=c},expandProperties:function(c){e(b.INFO,\"merging expandProperties with \"+k(c));for(var a in c)expandProperties[a]=c[a]},supports:function(c){e(b.INFO,\"setting supports to \"+k(c));h={};for(var a in g)h[g[a]]=D(g[a], c)},heading:function(c){e(b.INFO,\"setting heading to \"+k(c));u=c;e(b.HEADINGCHANGE,u)},keyboardState:function(c){e(b.INFO,\"setting keyboardState to \"+k(c));v=c;e(b.KEYBOARDCHANGE,v)},location:function(c){e(b.INFO,\"setting location to \"+k(c));q=c;e(b.LOCATIONCHANGE,q.lat,q.lon,q.acc)},network:function(c){e(b.INFO,\"setting network to \"+k(c));s=c;e(b.NETWORKCHANGE,s!=n.OFFLINE&&s!=n.UNKNOWN,s)},orientation:function(c){e(b.INFO,\"setting orientation to \"+k(c));w=c;e(b.ORIENTATIONCHANGE,w)},screenSize:function(c){e(b.INFO, \"setting screenSize to \"+k(c));t=c;e(b.SCREENCHANGE,t.width,t.height)},shakeProperties:function(c){e(b.INFO,\"setting shakeProperties to \"+k(c));x=c},tilt:function(c){e(b.INFO,\"setting tilt to \"+k(c));r=c;e(b.TILTCHANGE,r.x,r.y,r.z)},cacheRemaining:function(c){e(b.INFO,\"setting cacheRemaining to \"+k(c));A=c},viewable:function(c){e(b.VIEWABLECHANGE,\"setting viewable to \"+k(c));B=c}},l={},I=function(c){this.event=c;this.count=0;var a={};this.add=function(b){var e=String(b);a[e]||(a[e]=b,this.count++, this.count==1&&ormmaview.activate(c))};this.remove=function(b){b=String(b);return a[b]?(a[b]=null,delete a[b],this.count--,this.count==0&&ormmaview.deactivate(c),!0):!1};this.removeAll=function(){for(var c in a)this.remove(a[c])};this.broadcast=function(c){for(var b in a)a[b].apply({},c)};this.toString=function(){var b=[c,\":\"],e;for(e in a)b.push(\"|\",e,\"|\");return b.join(\"\")}};ormmaview.addEventListener(\"change\",function(c){for(var a in c)(0,H[a])(c[a])});ormmaview.addEventListener(\"shake\",function(){e(b.SHAKE)}); ormmaview.addEventListener(\"error\",function(c,a){e(b.ERROR,c,a)});ormmaview.addEventListener(\"response\",function(c,a){e(b.RESPONSE,c,a)});ormmaview.addEventListener(\"assetReady\",function(c,a){m[c]=a;e(b.ASSETREADY,c)});ormmaview.addEventListener(\"assetRemoved\",function(c){m[c]=null;delete m[c];e(b.ASSETREMOVED,c)});ormmaview.addEventListener(\"assetRetired\",function(c){m[c]=null;delete m[c];e(b.ASSETRETIRED,c)});var p=function(c){var a=function(){};a.prototype=c;return new a},k=function(c){if(typeof c== \"object\")if(c.push){var a=[],b;for(b in c)a.push(c[b]);return\"[\"+a.join(\",\")+\"]\"}else{a=[];for(b in c)a.push(\"'\"+b+\"':\"+c[b]);return\"{\"+a.join(\",\")+\"}\"}else return String(c)},z=function(c,a,d,f){if(f)if(c===void 0)return e(b.ERROR,\"Required object missing.\",d),!1;else for(var g in a)if(c[g]===void 0)return e(b.ERROR,\"Object missing required property \"+g,d),!1;for(g in c)if(a[g]){if(!a[g](c[g]))return e(b.ERROR,\"Value of property \"+g+\" is not valid type.\",d),!1}else return e(b.ERROR,\"Invalid property specified - \"+ g+\".\",d),!1;return!0},D=function(a,b){for(var e in b)if(b[e]==a)return!0;return!1},e=function(){for(var a=Array(arguments.length),b=0;b<arguments.length;b++)a[b]=arguments[b];b=a.shift();l[b]&&l[b].broadcast(a)};a.signalReady=function(){ORMMAReady?(window.clearInterval(y),ORMMAReady(),e(b.INFO,\"callback invoked\")):(C+=20,C>=1E4&&(window.clearInterval(y),e(b.ERROR,\"Callback not found (timeout of 10000ms occurred)!\")))};a.addEventListener=function(a,d){!a||!d?e(b.ERROR,\"Both event and listener are required.\", \"addEventListener\"):D(a,b)?(l[a]||(l[a]=new I(a)),l[a].add(d)):e(b.ERROR,\"Unknown event: \"+a,\"addEventListener\")};a.close=function(){ormmaview.close()};a.expand=function(a,d){e(b.INFO,\"expanding to \"+k(a));z(a,E,\"expand\",!0)&&ormmaview.expand(a,d)};a.getDefaultPosition=function(){return p(d)};a.getExpandProperties=function(){return p(ormmaview.getExpandProperties())};a.getMaxSize=function(){return p(i)};a.getSize=function(){return p(f)};a.getState=function(){return o};a.hide=function(){o==j.HIDDEN? e(b.ERROR,\"Ad is currently hidden.\",\"hide\"):ormmaview.hide()};a.open=function(a,d){a?ormmaview.open(a,d):e(b.ERROR,\"URL is required.\",\"open\")};a.openMap=function(a,d){a?ormmaview.openMap(a,d):e(b.ERROR,\"POI is required.\",\"openMap\")};a.removeEventListener=function(a,d){a?d&&(!l[a]||!l[a].remove(d))?e(b.ERROR,\"Listener not currently registered for event\",\"removeEventListener\"):(l[a]&&l[a].removeAll(),l[a]&&l[a].count==0&&(l[a]=null,delete l[a])):e(b.ERROR,\"Must specify an event.\",\"removeEventListener\")}; a.resize=function(a,d){a==null||d==null||isNaN(a)||isNaN(d)||a<0||d<0?e(b.ERROR,\"Requested size must be numeric values between 0 and maxSize.\",\"resize\"):a>i.width||d>i.height?e(b.ERROR,\"Request (\"+a+\" x \"+d+\") exceeds maximum allowable size of (\"+i.width+\" x \"+i.height+\")\",\"resize\"):a==f.width&&d==f.height?e(b.ERROR,\"Requested size equals current size.\",\"resize\"):ormmaview.resize(a,d)};a.setExpandProperties=function(a){z(a,F,\"setExpandProperties\")&&ormmaview.setExpandProperties(a)};a.show=function(){o!= j.HIDDEN?e(b.ERROR,\"Ad is currently visible.\",\"show\"):ormmaview.show()};a.playAudio=function(a,d){h[g.AUDIO]?!a||typeof a!=\"string\"?e(b.ERROR,\"Request must specify a URL\",\"playAudio\"):ormmaview.playAudio(a,d):e(b.ERROR,\"Method not supported by this client.\",\"playAudio\")};a.playVideo=function(a,d){h[g.VIDEO]?!a||typeof a!=\"string\"?e(b.ERROR,\"Request must specify a URL\",\"playVideo\"):ormmaview.playVideo(a,d):e(b.ERROR,\"Method not supported by this client.\",\"playVideo\")};a.createEvent=function(a,d,f){d= d.replace(/^\\s+|\\s+$/g,\"\");f=f.replace(/^\\s+|\\s+$/g,\"\");h[g.CALENDAR]?!a||typeof a!=\"object\"||!a.getDate?e(b.ERROR,\"Valid date required.\",\"createEvent\"):!d||typeof d!=\"string\"||d.length==0?e(b.ERROR,\"Valid title required.\",\"createEvent\"):!f||typeof f!=\"string\"||f.length==0?e(b.ERROR,\"Valid body required.\",\"createEvent\"):ormmaview.createEvent(a,d,f):e(b.ERROR,\"Method not supported by this client.\",\"createEvent\")};a.getHeading=function(){h[g.HEADING]||e(b.ERROR,\"Method not supported by this client.\", \"getHeading\");return u};a.getKeyboardState=function(){h[g.LEVEL2]||e(b.ERROR,\"Method not supported by this client.\",\"getKeyboardState\");return v};a.getLocation=function(){h[g.LOCATION]||e(b.ERROR,\"Method not supported by this client.\",\"getLocation\");return null==q?null:p(q)};a.getNetwork=function(){h[g.NETWORK]||e(b.ERROR,\"Method not supported by this client.\",\"getNetwork\");return s};a.getOrientation=function(){h[g.ORIENTATION]||e(b.ERROR,\"Method not supported by this client.\",\"getOrientation\");return w}; a.getScreenSize=function(){if(h[g.SCREEN])return null==t?null:p(t);else e(b.ERROR,\"Method not supported by this client.\",\"getScreenSize\")};a.getShakeProperties=function(){if(h[g.SHAKE])return null==x?null:p(x);else e(b.ERROR,\"Method not supported by this client.\",\"getShakeProperties\")};a.getTilt=function(){if(h[g.TILT])return null==r?null:p(r);else e(b.ERROR,\"Method not supported by this client.\",\"getTilt\")};a.makeCall=function(a){h[g.PHONE]?!a||typeof a!=\"string\"?e(b.ERROR,\"Request must provide a number to call.\", \"makeCall\"):ormmaview.makeCall(a):e(b.ERROR,\"Method not supported by this client.\",\"makeCall\")};a.sendMail=function(a,d,f){h[g.EMAIL]?!a||typeof a!=\"string\"?e(b.ERROR,\"Request must specify a recipient.\",\"sendMail\"):ormmaview.sendMail(a,d,f):e(b.ERROR,\"Method not supported by this client.\",\"sendMail\")};a.sendSMS=function(a,d){h[g.SMS]?!a||typeof a!=\"string\"?e(b.ERROR,\"Request must specify a recipient.\",\"sendSMS\"):ormmaview.sendSMS(a,d):e(b.ERROR,\"Method not supported by this client.\",\"sendSMS\")};a.setShakeProperties= function(a){h[g.SHAKE]?z(a,G,\"setShakeProperties\")&&ormmaview.setShakeProperties(a):e(b.ERROR,\"Method not supported by this client.\",\"setShakeProperties\")};a.supports=function(a){return h[a]?!0:!1};a.addAsset=function(a,d){!a||!d||typeof a!=\"string\"||typeof d!=\"string\"?e(b.ERROR,\"URL and alias are required.\",\"addAsset\"):h[g.LEVEL3]?ormmaview.addAsset(a,d):a.indexOf(\"ormma://\")==0?e(b.ERROR,\"Native device assets not supported by this client.\",\"addAsset\"):(m[d]=a,e(b.ASSETREADY,d))};a.addAssets=function(b){for(var d in b)a.addAsset(b[d], d)};a.getAssetURL=function(a){m[a]||e(b.ERROR,\"Alias unknown.\",\"getAssetURL\");return m[a]};a.getCacheRemaining=function(){h[g.LEVEL3]||e(b.ERROR,\"Method not supported by this client.\",\"getCacheRemaining\");return A};a.request=function(a,d){h[g.LEVEL3]?!a||typeof a!=\"string\"?e(b.ERROR,\"URI is required.\",\"request\"):ormmaview.request(a,d):e(b.ERROR,\"Method not supported by this client.\",\"request\")};a.removeAllAssets=function(){for(var b in m)a.removeAsset(b)};a.removeAsset=function(a){!a||typeof a!=\"string\"? e(b.ERROR,\"Alias is required.\",\"removeAsset\"):m[a]?h[g.LEVEL3]?ormmaview.removeAsset(a):(m[a]=null,delete m[a],e(b.ASSETREMOVED,a)):e(b.ERROR,\"Alias unknown.\",\"removeAsset\")};a.getViewable=function(){return B}})();window.Ormma=window.ormma;"
