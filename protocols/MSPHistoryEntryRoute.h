/* Generated by RuntimeBrowser.
 */

@protocol MSPHistoryEntryRoute <MSPHistoryEntry>

@required

- (GEOComposedWaypoint *)endWaypoint;
- (BOOL)navigationWasInterrupted;
- (GEOURLRouteHandle *)routeHandle;
- (GEOComposedWaypoint *)startWaypoint;
- (int)transportType;

@end
