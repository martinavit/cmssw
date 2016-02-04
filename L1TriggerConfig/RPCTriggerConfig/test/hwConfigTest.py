import FWCore.ParameterSet.Config as cms

process = cms.Process("read")
process.maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(1)
)
process.source = cms.Source("EmptySource")

process.rpcconfsrc1 = cms.ESProducer("RPCTriggerHwConfig",
    disableAll = cms.bool(False),
    enableCrates = cms.vint32(),
    enableTowers = cms.vint32(),
    enableTowersInCrates = cms.vint32(),
    disableCrates = cms.vint32(),
    disableTowers = cms.vint32(),
    disableTowersInCrates = (cms.vint32(0, -12, 0, -11, 0, -10, 0, -9, 0, -8, 0, -7, 0, -6, 0, -5, 0, -4, 0, -3, 0, -2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 1, -12, 1, -11, 1, -10, 1, -9, 1, -8, 1, -7, 1, -6, 1, -5, 1, -4, 1, -3, 1, -2, 1, -1, 1, 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 5, 1, 6, 1, 7, 1, 8, 1, 9, 1, 10, 1, 11, 1, 12, 2, -12, 2, -11, 2, -10, 2, -9, 2, -8, 2, -7, 2, -6, 2, -5, 2, -4, 2, -3, 2, -2, 2, -1, 2, 0, 2, 1, 2, 2, 2, 3, 2, 4, 2, 5, 2, 6, 2, 7, 2, 8, 2, 9, 2, 10, 2, 11, 2, 12, 3, -12, 3, -11, 3, -10, 3, -9, 3, -8, 3, -7, 3, -6, 3, -5, 3, -4, 3, -3, 3, -2, 3, -1, 3, 0, 3, 1, 3, 2, 3, 3, 3, 4, 3, 5, 3, 6, 3, 7, 3, 8, 3, 9, 3, 10, 3, 11, 3, 12, 4, -12, 4, -11, 4, -10, 4, -9, 4, -8, 4, -7, 4, -6, 4, -5, 4, -4, 4, -3, 4, -2, 4, -1, 4, 0, 4, 1, 4, 2, 4, 3, 4, 4, 4, 5, 4, 6, 4, 7, 4, 8, 4, 9, 4, 10, 4, 11, 4, 12, 5, -12, 5, -11, 5)+cms.vint32(-10, 5, -9, 5, -8, 5, -7, 5, -6, 5, -5, 5, -4, 5, -3, 5, -2, 5, -1, 5, 0, 5, 1, 5, 2, 5, 3, 5, 4, 5, 5, 5, 6, 5, 7, 5, 8, 5, 9, 5, 10, 5, 11, 5, 12, 6, -12, 6, -11, 6, -10, 6, -9, 6, -8, 6, -7, 6, -6, 6, -5, 6, -4, 6, -3, 6, -2, 6, -1, 6, 0, 6, 1, 6, 2, 6, 3, 6, 4, 6, 5, 6, 6, 6, 7, 6, 8, 6, 9, 6, 10, 6, 11, 6, 12, 7, -12, 7, -11, 7, -10, 7, -9, 7, -8, 7, -7, 7, -6, 7, -5, 7, -4, 7, -3, 7, -2, 7, -1, 7, 0, 7, 1, 7, 2, 7, 3, 7, 4, 7, 5, 7, 6, 7, 7, 7, 8, 7, 9, 7, 10, 7, 11, 7, 12, 8, -12, 8, -11, 8, -10, 8, -9, 8, -8, 8, -7, 8, -6, 8, -5, 8, -4, 8, -3, 8, -2, 8, -1, 8, 0, 8, 1, 8, 2, 8, 3, 8, 4, 8, 5, 8, 6, 8, 7, 8, 8, 8, 9, 8, 10, 8, 11, 8, 12, 9, 9, 9, 10, 9, 11, 9, 12, 10, -12, 10, -11, 10, -10, 10, -9, 10, -8, 10, -7, 10, -6, 10, -5, 10, -4, 10, -3, 10, -2, 10, -1, 10, 0, 10, 1, 10, 2, 10, 3, 10, 4, 10, 5, 10, 6, 10, 7, 10, 8, 10, 9, 10, 10, 10, 11, 10, 12, 11, -12)+cms.vint32(11, -11, 11, -10, 11, -9, 11, -8, 11, -7, 11, -6, 11, -5, 11, -4, 11, -3, 11, -2, 11, -1, 11, 0, 11, 1, 11, 2, 11, 3, 11, 4, 11, 5, 11, 6, 11, 7, 11, 8, 11, 9, 11, 10, 11, 11, 11, 12)),
)

process.rpcconfsrc = cms.ESSource("EmptyESSource",
    recordName = cms.string('L1RPCHwConfigRcd'),
    iovIsRunNotTime = cms.bool(True),
    firstValid = cms.vuint32(1)
)

process.tmf = cms.EDFilter("TestHWConfig")

process.p = cms.Path(process.tmf)


