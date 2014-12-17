#ifdef __CINT__

#include <vector>
#include "albers/CollectionBase.h"

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclasses;

#pragma link C++ class BareHit+;
#pragma link C++ class std::vector<BareHit>+;
#pragma link C++ class BareJet+;
#pragma link C++ class std::vector<BareJet>+;
#pragma link C++ class LorentzVector+;
#pragma link C++ class std::vector<LorentzVector>+;
#pragma link C++ class Point+;
#pragma link C++ class std::vector<Point>+;
#pragma link C++ class BareParticle+;
#pragma link C++ class std::vector<BareParticle>+;
#pragma link C++ class BareCluster+;
#pragma link C++ class std::vector<BareCluster>+;
#pragma link C++ class ParticleTrackAssociation+;
#pragma link C++ class std::vector<ParticleTrackAssociation>+;
#pragma link C++ class ParticleTrackAssociationHandle+;
#pragma link C++ class ParticleTrackAssociationCollection+;
#pragma link C++ class TrackCluster+;
#pragma link C++ class std::vector<TrackCluster>+;
#pragma link C++ class TrackClusterHandle+;
#pragma link C++ class TrackClusterCollection+;
#pragma link C++ class ParticleMCAssociation+;
#pragma link C++ class std::vector<ParticleMCAssociation>+;
#pragma link C++ class ParticleMCAssociationHandle+;
#pragma link C++ class ParticleMCAssociationCollection+;
#pragma link C++ class JetParticleAssociation+;
#pragma link C++ class std::vector<JetParticleAssociation>+;
#pragma link C++ class JetParticleAssociationHandle+;
#pragma link C++ class JetParticleAssociationCollection+;
#pragma link C++ class MissingEnergy+;
#pragma link C++ class std::vector<MissingEnergy>+;
#pragma link C++ class MissingEnergyHandle+;
#pragma link C++ class MissingEnergyCollection+;
#pragma link C++ class CaloCluster+;
#pragma link C++ class std::vector<CaloCluster>+;
#pragma link C++ class CaloClusterHandle+;
#pragma link C++ class CaloClusterCollection+;
#pragma link C++ class SimCaloClusterHitAssociation+;
#pragma link C++ class std::vector<SimCaloClusterHitAssociation>+;
#pragma link C++ class SimCaloClusterHitAssociationHandle+;
#pragma link C++ class SimCaloClusterHitAssociationCollection+;
#pragma link C++ class MCParticle+;
#pragma link C++ class std::vector<MCParticle>+;
#pragma link C++ class MCParticleHandle+;
#pragma link C++ class MCParticleCollection+;
#pragma link C++ class CaloHitAssociation+;
#pragma link C++ class std::vector<CaloHitAssociation>+;
#pragma link C++ class CaloHitAssociationHandle+;
#pragma link C++ class CaloHitAssociationCollection+;
#pragma link C++ class SimCaloHit+;
#pragma link C++ class std::vector<SimCaloHit>+;
#pragma link C++ class SimCaloHitHandle+;
#pragma link C++ class SimCaloHitCollection+;
#pragma link C++ class MCParticleAssociation+;
#pragma link C++ class std::vector<MCParticleAssociation>+;
#pragma link C++ class MCParticleAssociationHandle+;
#pragma link C++ class MCParticleAssociationCollection+;
#pragma link C++ class SimCaloCluster+;
#pragma link C++ class std::vector<SimCaloCluster>+;
#pragma link C++ class SimCaloClusterHandle+;
#pragma link C++ class SimCaloClusterCollection+;
#pragma link C++ class TrackClusterHitsAssociation+;
#pragma link C++ class std::vector<TrackClusterHitsAssociation>+;
#pragma link C++ class TrackClusterHitsAssociationHandle+;
#pragma link C++ class TrackClusterHitsAssociationCollection+;
#pragma link C++ class VertexTrackAssociation+;
#pragma link C++ class std::vector<VertexTrackAssociation>+;
#pragma link C++ class VertexTrackAssociationHandle+;
#pragma link C++ class VertexTrackAssociationCollection+;
#pragma link C++ class EventInfo+;
#pragma link C++ class std::vector<EventInfo>+;
#pragma link C++ class EventInfoHandle+;
#pragma link C++ class EventInfoCollection+;
#pragma link C++ class TrackHit+;
#pragma link C++ class std::vector<TrackHit>+;
#pragma link C++ class TrackHitHandle+;
#pragma link C++ class TrackHitCollection+;
#pragma link C++ class GenJetParticleAssociation+;
#pragma link C++ class std::vector<GenJetParticleAssociation>+;
#pragma link C++ class GenJetParticleAssociationHandle+;
#pragma link C++ class GenJetParticleAssociationCollection+;
#pragma link C++ class Jet+;
#pragma link C++ class std::vector<Jet>+;
#pragma link C++ class JetHandle+;
#pragma link C++ class JetCollection+;
#pragma link C++ class MET+;
#pragma link C++ class std::vector<MET>+;
#pragma link C++ class METHandle+;
#pragma link C++ class METCollection+;
#pragma link C++ class Track+;
#pragma link C++ class std::vector<Track>+;
#pragma link C++ class TrackHandle+;
#pragma link C++ class TrackCollection+;
#pragma link C++ class Vertex+;
#pragma link C++ class std::vector<Vertex>+;
#pragma link C++ class VertexHandle+;
#pragma link C++ class VertexCollection+;
#pragma link C++ class GenJet+;
#pragma link C++ class std::vector<GenJet>+;
#pragma link C++ class GenJetHandle+;
#pragma link C++ class GenJetCollection+;
#pragma link C++ class CaloHit+;
#pragma link C++ class std::vector<CaloHit>+;
#pragma link C++ class CaloHitHandle+;
#pragma link C++ class CaloHitCollection+;
#pragma link C++ class Particle+;
#pragma link C++ class std::vector<Particle>+;
#pragma link C++ class ParticleHandle+;
#pragma link C++ class ParticleCollection+;
#pragma link C++ class TrackClusterAssociation+;
#pragma link C++ class std::vector<TrackClusterAssociation>+;
#pragma link C++ class TrackClusterAssociationHandle+;
#pragma link C++ class TrackClusterAssociationCollection+;
#pragma link C++ class TrackState+;
#pragma link C++ class std::vector<TrackState>+;
#pragma link C++ class TrackStateHandle+;
#pragma link C++ class TrackStateCollection+;
#pragma link C++ class SimCaloHitMCParticleAssociation+;
#pragma link C++ class std::vector<SimCaloHitMCParticleAssociation>+;
#pragma link C++ class SimCaloHitMCParticleAssociationHandle+;
#pragma link C++ class SimCaloHitMCParticleAssociationCollection+;
#pragma link C++ class TrackStateAssociation+;
#pragma link C++ class std::vector<TrackStateAssociation>+;
#pragma link C++ class TrackStateAssociationHandle+;
#pragma link C++ class TrackStateAssociationCollection+;
#pragma link C++ class ParticleClusterAssociation+;
#pragma link C++ class std::vector<ParticleClusterAssociation>+;
#pragma link C++ class ParticleClusterAssociationHandle+;
#pragma link C++ class ParticleClusterAssociationCollection+;


#pragma link C++ class albers::CollectionBase+;
#pragma link C++ class albers::Registry+;

#pragma link C++ class PyEventStore+;

#endif
