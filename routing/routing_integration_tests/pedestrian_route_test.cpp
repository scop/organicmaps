#include "testing/testing.hpp"

#include "routing/routing_callbacks.hpp"

#include "routing/routing_integration_tests/routing_test_tools.hpp"

#include "geometry/mercator.hpp"


namespace pedestrian_route_test
{
using namespace routing;
using namespace routing::turns;

UNIT_TEST(GermanyBremenJunctionToCycleway)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(52.41947, 10.75148), {0., 0.},
      mercator::FromLatLon(52.41868, 10.75274), 137.);
}

UNIT_TEST(Zgrad424aTo1207)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.9963, 37.2036), {0., 0.},
      mercator::FromLatLon(55.9955, 37.1948), 623.2);
}

UNIT_TEST(Zgrad924aTo418)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.9844, 37.1808), {0., 0.},
      mercator::FromLatLon(55.9999, 37.2021), 2526.);
}

UNIT_TEST(Zgrad924aToFilaretovskyChurch)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.9844, 37.1808), {0., 0.},
      mercator::FromLatLon(55.9915, 37.1808), 1225.82);
}

UNIT_TEST(Zgrad924aTo1145)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.9844, 37.1808), {0., 0.},
      mercator::FromLatLon(55.9924, 37.1853), 1193.0);
}

UNIT_TEST(MoscowMuzeonToLebedinoeOzeroGorkyPark)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.7348, 37.606), {0., 0.},
      mercator::FromLatLon(55.724, 37.5956), 1640.0);
}

/*
UNIT_TEST(Zgrad315parkingToMusicSchoolBus_BadRoute)
{
  // Bad route:
  // route goes through a highway-tertiary.

  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.9996, 37.2174), {0., 0.},
      mercator::FromLatLon(55.9999, 37.2179), 161.);
}
*/

UNIT_TEST(Zgrad924aToKrukovo)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.9844, 37.1808), {0., 0.},
      mercator::FromLatLon(55.9802, 37.1736), 1305.48);
}

UNIT_TEST(MoscowMailRuStarbucksToPetrovskoRazumovskyAlley)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.7971, 37.5376), {0., 0.},
      mercator::FromLatLon(55.7953, 37.5597), 1840.);
}

UNIT_TEST(AustraliaMelburn_AvoidMotorway)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(-37.7936, 144.985), {0., 0.},
      mercator::FromLatLon(-37.7896, 145.025), 4659.5);
}

UNIT_TEST(AustriaWein_AvoidTrunk)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(48.233, 16.3562), {0., 0.},
      mercator::FromLatLon(48.2458, 16.3704), 2301.);
}

UNIT_TEST(FranceParis_AvoidBridleway)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(48.859, 2.25452), {0., 0.},
      mercator::FromLatLon(48.8634, 2.24315), 1049.);
}

UNIT_TEST(HungaryBudapest_AvoidMotorway)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(47.56566, 19.14942), {0., 0.},
      mercator::FromLatLon(47.593, 19.24018), 10072.3);
}

UNIT_TEST(PolandWarshaw_AvoidCycleway)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(52.2487, 21.0173), {0., 0.},
      mercator::FromLatLon(52.25, 21.0164), 182.);
}

UNIT_TEST(SwedenStockholmSlussenHiltonToMaritimeMuseum)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(59.32046, 18.06924), {0.0, 0.0},
      mercator::FromLatLon(59.32751, 18.09092), 3700.35);
}

UNIT_TEST(SwedenStockholmSlussenHiltonToAfChapmanHostel)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(59.32045, 18.06928), {0., 0.},
      mercator::FromLatLon(59.3254, 18.08022), 2328.);
}

UNIT_TEST(EstoniaTallinnRadissonHiltonToCatherdalChurch)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(59.4362, 24.7682), {0., 0.},
      mercator::FromLatLon(59.437, 24.7392), 2016.);
}

UNIT_TEST(EstoniaTallinnRadissonHiltonToSkypeOffice)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(59.4362, 24.7682), {0., 0.},
      mercator::FromLatLon(59.3971, 24.661), 8673.);
}

UNIT_TEST(BelarusMinksHotelYubileyniToChurchSaintsSimonAndHelen)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(53.9112, 27.5466), {0., 0.},
      mercator::FromLatLon(53.8965, 27.5476), 2244.);
}

UNIT_TEST(BelarusMinksBarURatushiToMoscowBusStation)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(53.9045, 27.5569), {0., 0.},
      mercator::FromLatLon(53.889, 27.5466), 2395.3);
}

UNIT_TEST(BelarusBobruisk50LetVlksmToSanatoryShinnik)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(53.1638, 29.1804), {0., 0.},
      mercator::FromLatLon(53.179, 29.1682), 2400.);
}

UNIT_TEST(BelarusBobruisk50LetVlksmToArena)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(53.1638, 29.1804), {0., 0.},
      mercator::FromLatLon(53.1424, 29.2467), 6123.0);
}

UNIT_TEST(RussiaTaganrogSyzranov10k3ToSoftech)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(47.2183, 38.8634), {0., 0.},
      mercator::FromLatLon(47.2, 38.8878), 3868.);
}

UNIT_TEST(RussiaTaganrogSyzranov10k3ToTruseE)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(47.2183, 38.8634), {0., 0.},
      mercator::FromLatLon(47.2048, 38.9441), 7144.6);
}

UNIT_TEST(RussiaTaganrogSyzranov10k3ToLazo5k2)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(47.2183, 38.8634), {0., 0.},
      mercator::FromLatLon(47.2584, 38.9128), 8004.74);
}

UNIT_TEST(RussiaTaganrogJukova2ToBolBulvarnaya8)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(47.2768, 38.9282), {0., 0.},
      mercator::FromLatLon(47.2412, 38.8902), 6239.);
}

UNIT_TEST(RussiaTaganrogCheckhova267k2ToKotlostroy33)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(47.2200, 38.8906), {0., 0.},
      mercator::FromLatLon(47.2459, 38.8937), 3485.);
}

UNIT_TEST(RussiaTaganrogCheckhova267k2ToBolBulvarnaya8)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(47.2200, 38.8906), {0., 0.},
      mercator::FromLatLon(47.2412, 38.8902), 2897.);
}

UNIT_TEST(RussiaRostovOnDonPrKosmonavtovToDneprovsky120b)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(47.2811, 39.7178), {0., 0.},
      mercator::FromLatLon(47.2875, 39.759), 4300.);
}

UNIT_TEST(TurkeyKemerPalmetResortToYachtClub)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(36.6143, 30.5572), {0., 0.},
      mercator::FromLatLon(36.6004, 30.576), 2992.);
}

UNIT_TEST(CzechPragueNode5ToHilton)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(50.0653, 14.4031), {0., 0.},
      mercator::FromLatLon(50.0933, 14.4397), 5106.);
}

UNIT_TEST(CzechPragueHiltonToKarlovMost)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(50.0933, 14.4397), {0., 0.},
      mercator::FromLatLon(50.0864, 14.4124), 2568.8);
}

UNIT_TEST(CzechPragueHiltonToNicholasChurch)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(50.0933, 14.4397), {0., 0.},
      mercator::FromLatLon(50.088, 14.4032), 3103.);
}

UNIT_TEST(CzechPragueHiltonToKvetniceViewpoint)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(50.0933, 14.4397), {0., 0.},
      mercator::FromLatLon(50.0806, 14.3973), 4448.6);
}

UNIT_TEST(RussiaSaintPetersburgMoyka93ToAlexanderColumn)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(59.9241, 30.323), {0., 0.},
      mercator::FromLatLon(59.939, 30.3159), 2424.6);
}

UNIT_TEST(RussiaSaintPetersburgMoyka93ToMarsovoPole)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(59.9241, 30.323), {0., 0.},
      mercator::FromLatLon(59.9436, 30.3318), 2891.);
}

UNIT_TEST(RussiaSaintPetersburgMoyka93ToAvrora)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(59.9241, 30.323), {0., 0.},
      mercator::FromLatLon(59.9554, 30.3378), 4770.);
}

UNIT_TEST(RussiaSaintPetersburgPetrPaulChurchToDolphins)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(59.9502, 30.3165), {0., 0.},
      mercator::FromLatLon(59.973, 30.2702), 4507.);
}

UNIT_TEST(RussiaPetergofEntranceToErmitagePalace)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(59.8806, 29.904), {0., 0.},
      mercator::FromLatLon(59.8889, 29.9034), 1073.);
}

UNIT_TEST(RussiaPetergofMarlyPalaceToTrainStation)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(59.8887, 29.8963), {0., 0.},
      mercator::FromLatLon(59.8648, 29.9251), 3885.);
}

UNIT_TEST(RussiaMoscowMailRuToTsarCannon)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.79703, 37.53761), {0., 0.},
      mercator::FromLatLon(55.75146, 37.61792), 7989.);
}

UNIT_TEST(RussiaMoscowHovrinoStationToKasperskyLab)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.8701, 37.50833), {0., 0.},
      mercator::FromLatLon(55.83715, 37.48132), 5162.);
}

UNIT_TEST(ItalyRome_WalkOverStreetWithSidewalkBoth)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(41.9052, 12.4106), {0., 0.},
      mercator::FromLatLon(41.9226, 12.4216), 2413.);
}

UNIT_TEST(USARedlandsEsriHQToRedlandsCommunity)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(34.0556, -117.19567), {0., 0.},
      mercator::FromLatLon(34.03682, -117.20649), 3330.);
}

UNIT_TEST(USANewYorkEmpireStateBuildingToUnitedNations)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(40.74844, -73.98566), {0., 0.},
      mercator::FromLatLon(40.75047, -73.96759), 2265.);
}

// Test on walking around a ford on an mwm border.
UNIT_TEST(CrossMwmRussiaPStaiToBelarusDrazdy)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.014, 30.95552), {0., 0.},
      mercator::FromLatLon(55.01437, 30.8858), 4835.76);
}

UNIT_TEST(Russia_ZgradPanfilovskyUndergroundCrossing_TurnTest)
{
  TRouteResult const routeResult =
      integration::CalculateRoute(integration::GetVehicleComponents(VehicleType::Pedestrian),
                                  mercator::FromLatLon(55.98401, 37.17979), {0., 0.},
                                  mercator::FromLatLon(55.98419, 37.17938));

  Route const & route = *routeResult.first;
  RouterResultCode const result = routeResult.second;
  TEST_EQUAL(result, RouterResultCode::NoError, ());

  integration::TestRouteLength(route, 151.0);

  std::vector<turns::TurnItem> t;
  route.GetTurnsForTesting(t);
  TEST_EQUAL(t.size(), 3, ());

  TEST_EQUAL(t[0].m_pedestrianTurn, PedestrianDirection::TurnRight, ());
  TEST_EQUAL(t[1].m_pedestrianTurn, PedestrianDirection::TurnRight, ());
  TEST_EQUAL(t[2].m_pedestrianTurn, PedestrianDirection::ReachedYourDestination, ());
}

UNIT_TEST(Russia_Moscow_HydroprojectBridgeCrossing_TurnTest)
{
  TRouteResult const routeResult =
      integration::CalculateRoute(integration::GetVehicleComponents(VehicleType::Pedestrian),
                                  mercator::FromLatLon(55.80867, 37.50575), {0., 0.},
                                  mercator::FromLatLon(55.80884, 37.50668));

  Route const & route = *routeResult.first;
  RouterResultCode const result = routeResult.second;
  TEST_EQUAL(result, RouterResultCode::NoError, ());

  // I don't see any bad routing sections here. Make actual value.
  integration::TestRouteLength(route, 352.09);

  std::vector<turns::TurnItem> t;
  route.GetTurnsForTesting(t);
  TEST_EQUAL(t.size(), 5, ());

  TEST_EQUAL(t[0].m_pedestrianTurn, PedestrianDirection::TurnLeft, ());
  TEST_EQUAL(t[1].m_pedestrianTurn, PedestrianDirection::TurnRight, ());
  TEST_EQUAL(t[2].m_pedestrianTurn, PedestrianDirection::TurnLeft, ());
  TEST_EQUAL(t[3].m_pedestrianTurn, PedestrianDirection::TurnRight, ());
  TEST_EQUAL(t[4].m_pedestrianTurn, PedestrianDirection::ReachedYourDestination, ());
}

UNIT_TEST(Belarus_Minsk_RenaissanceHotelUndergroundCross_TurnTest)
{
  TRouteResult const routeResult =
      integration::CalculateRoute(integration::GetVehicleComponents(VehicleType::Pedestrian),
                                  mercator::FromLatLon(53.89296, 27.52775), {0., 0.},
                                  mercator::FromLatLon(53.89262, 27.52838));

  Route const & route = *routeResult.first;
  RouterResultCode const result = routeResult.second;
  TEST_EQUAL(result, RouterResultCode::NoError, ());

  integration::TestRouteLength(route, 127.0);

  std::vector<turns::TurnItem> t;
  route.GetTurnsForTesting(t);
  TEST_EQUAL(t.size(), 5, ());

  TEST_EQUAL(t[0].m_pedestrianTurn, PedestrianDirection::TurnRight, ());
  TEST_EQUAL(t[1].m_pedestrianTurn, PedestrianDirection::TurnRight, ());
  TEST_EQUAL(t[2].m_pedestrianTurn, PedestrianDirection::TurnRight, ());
  TEST_EQUAL(t[3].m_pedestrianTurn, PedestrianDirection::TurnRight, ());
  TEST_EQUAL(t[4].m_pedestrianTurn, PedestrianDirection::ReachedYourDestination, ());
}

UNIT_TEST(MoscowVodnyStadiumHighwayPlatform)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.83955, 37.48692), {0., 0.},
      mercator::FromLatLon(55.84061, 37.48636), 136.115);
}

UNIT_TEST(MoscowChistiePrudiSelectPointsInConnectedGraph)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.76613, 37.63769), {0., 0.},
      mercator::FromLatLon(55.76593, 37.63893), 134.02);
}

UNIT_TEST(Russia_Moscow_SevTushinoParkPedestrianOnePoint_TurnTest)
{
  m2::PointD const point = mercator::FromLatLon(55.8719, 37.4464);
  TRouteResult const routeResult = integration::CalculateRoute(
      integration::GetVehicleComponents(VehicleType::Pedestrian), point, {0.0, 0.0}, point);

  Route const & route = *routeResult.first;
  RouterResultCode const result = routeResult.second;
  TEST_EQUAL(result, RouterResultCode::NoError, ());

  integration::TestRouteLength(route, 0.0);

  integration::TestTurnCount(route, 0 /* expectedTurnCount */);
}

UNIT_TEST(MoscowKashirskoe16ToVorobeviGori)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.66230, 37.63214), {0., 0.},
      mercator::FromLatLon(55.70934, 37.54232), 9553.0);
}

// Test on building pedestrian route past ferry.
UNIT_TEST(SwitzerlandSaintBlaisePedestrianPastFerry)
{
  // New value has bigger ditance (+100 meters), but better ETA (-1 minute).
  // Check with intermediate point {47.0098, 6.9770}
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(47.010336, 6.982954), {0.0, 0.0},
      mercator::FromLatLon(47.005817, 6.970227), 1662.43);
}

// Test on building pedestrian route past ferry.
UNIT_TEST(NetherlandsAmsterdamPedestrianPastFerry)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(52.38075, 4.89938), {0.0, 0.0},
      mercator::FromLatLon(52.40194, 4.89038), 2553.18);
}

// Test on building pedestrian route past ferry.
UNIT_TEST(ItalyVenicePedestrianPastFerry)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(45.4375, 12.33549), {0.0, 0.0},
      mercator::FromLatLon(45.44057, 12.33393), 725.4);
}

// Test on climbing from Priut11 to Elbrus mountain.
UNIT_TEST(RussiaPriut11Elbrus)
{
  integration::CalculateRouteAndTestRouteTime(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(43.31475, 42.46035), {0., 0.},
      mercator::FromLatLon(43.35254, 42.43788), 37753.4 /* expectedTimeSeconds */);
}

// Test on going down from Elbrus mountain to Priut11.
UNIT_TEST(RussiaElbrusPriut11)
{
  integration::CalculateRouteAndTestRouteTime(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(43.35254, 42.43788), {0., 0.},
      mercator::FromLatLon(43.31475, 42.46035), 15878.9 /* expectedTimeSeconds */);
}

// Test on going straight forward on primary road.
UNIT_TEST(BudvaPrimaryRoad)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(42.2884527, 18.8456794), {0., 0.},
      mercator::FromLatLon(42.2880575, 18.8492896), 412.66);
}

// Test on start and finish route which lies on a feature crossed by a mwm border and a ford.
UNIT_TEST(RussiaSmolenskAriaFeatureCrossingBorderWithFord)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.01727, 30.91566), {0., 0.},
      mercator::FromLatLon(55.01867, 30.91285), 298.6);
}

UNIT_TEST(NoTurnOnForkingRoad_TurnTest)
{
  TRouteResult const routeResult = integration::CalculateRoute(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.67505, 37.51851), {0.0, 0.0}, mercator::FromLatLon(55.67488, 37.5178));

  Route const & route = *routeResult.first;
  RouterResultCode const result = routeResult.second;
  TEST_EQUAL(result, RouterResultCode::NoError, ());

  integration::TestRouteLength(route, 51.2);

  std::vector<turns::TurnItem> t;
  route.GetTurnsForTesting(t);
  TEST_EQUAL(t.size(), 2, ());

  TEST_EQUAL(t[0].m_pedestrianTurn, PedestrianDirection::TurnLeft, ());
}

UNIT_TEST(NoTurnOnForkingRoad2_TurnTest)
{
  TRouteResult const routeResult = integration::CalculateRoute(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(55.68336, 37.49492), {0.0, 0.0}, mercator::FromLatLon(55.68488, 37.49789));

  TEST_EQUAL(routeResult.second, RouterResultCode::NoError, ());
  TEST(routeResult.first, ());
  Route const & route = *routeResult.first;

  integration::TestRouteLength(route, 300.0);

  // Unfortunatelly, we don't have SlightRight for pedestrians, but current turns are OK.
  // https://www.openstreetmap.org/directions?engine=graphhopper_foot&route=55.68336%2C37.49492%3B55.68488%2C37.49789
  std::vector<turns::TurnItem> t;
  route.GetTurnsForTesting(t);
  TEST_EQUAL(t.size(), 3, (t));

  TEST_EQUAL(t[0].m_pedestrianTurn, PedestrianDirection::TurnRight, ());
  TEST_EQUAL(t[1].m_pedestrianTurn, PedestrianDirection::TurnRight, ());
}

UNIT_TEST(Hungary_UseFootways)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(45.8587043, 18.2863972), {0., 0.},
      mercator::FromLatLon(45.858625, 18.285348), 95.7657, 0.02 /* relativeError */);
}

UNIT_TEST(France_Uphill_Downlhill)
{
  using namespace integration;
  using mercator::FromLatLon;

  double timeDownhill, timeUphill;
  {
    TRouteResult const routeResult = CalculateRoute(GetVehicleComponents(VehicleType::Pedestrian),
        FromLatLon(45.32111, 3.69535), {0., 0.},
        FromLatLon(45.235327, 3.857533));

    TEST_EQUAL(routeResult.second, RouterResultCode::NoError, ());
    TEST(routeResult.first, ());
    Route const & route = *routeResult.first;

    TestRouteLength(route, 20947.5);
    timeDownhill = route.GetTotalTimeSec();
    TEST_GREATER(timeDownhill, 4 * 3600, ());
  }

  {
    TRouteResult const routeResult = CalculateRoute(GetVehicleComponents(VehicleType::Pedestrian),
        FromLatLon(45.235327, 3.857533), {0., 0.},
        FromLatLon(45.32111, 3.69535));

    TEST_EQUAL(routeResult.second, RouterResultCode::NoError, ());
    TEST(routeResult.first, ());
    Route const & route = *routeResult.first;

    TestRouteLength(route, 20947.5);
    timeUphill = route.GetTotalTimeSec();
    TEST_GREATER(timeUphill, 4 * 3600, ());
  }

  TEST_GREATER(timeUphill - timeDownhill, 1000, ());
}

// https://github.com/organicmaps/organicmaps/issues/1342
UNIT_TEST(Crimea_Altitude_Mountains)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(44.7600296, 34.3247698), {0., 0.},
      mercator::FromLatLon(44.7632754, 34.313077), 1303.43);
}

// https://github.com/organicmaps/organicmaps/issues/2803
UNIT_TEST(Italy_Rome_Altitude_Footway)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(41.899384, 12.4980887), {0., 0.},
      mercator::FromLatLon(41.9007759, 12.4994956), 203.861);
}

UNIT_TEST(Romania_Mountains_ETA)
{
  using namespace integration;
  using mercator::FromLatLon;

  TRouteResult const routeResult = CalculateRoute(GetVehicleComponents(VehicleType::Pedestrian),
      FromLatLon(45.5450, 25.2584), {0., 0.},
      FromLatLon(45.5223, 25.2806));

  TEST_EQUAL(routeResult.second, RouterResultCode::NoError, ());
  TEST(routeResult.first, ());
  Route const & route = *routeResult.first;

  /// @todo Current Tobler’s Hiking function works bad here.

  TestRouteLength(route, 4671.33);
  route.GetTotalTimeSec();
  TEST_LESS(route.GetTotalTimeSec(), 2 * 3600, ());
}

// Check piligrim routes here: www santiago.nl/downloads/
UNIT_TEST(Spain_N634_Piligrim_Road)
{
  integration::CalculateRouteAndTestRouteLength(
      integration::GetVehicleComponents(VehicleType::Pedestrian),
      mercator::FromLatLon(43.5488528, -6.4696861), {0., 0.},
      mercator::FromLatLon(43.5435194, -6.5340694), 7217.93);
}

} // namespace pedestrian_route_test
