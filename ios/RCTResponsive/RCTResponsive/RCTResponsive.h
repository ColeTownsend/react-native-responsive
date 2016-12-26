#import "RCTBridgeModule.h"
#import "./modules/Device.h" 
// /!\ IMPORTANT: All new classes must be created via xcode (New file -> Cocoa class)
// and not created manually else they won't be taken in account during the compilation process


// Utilisation du concept de collection pour splitter nos interfaces/implémentations en fonction
// si c'est relatif au bridge React Native ou au code pur IOS :
@interface Device (RCTExternModule) <RCTBridgeModule> 

@end
