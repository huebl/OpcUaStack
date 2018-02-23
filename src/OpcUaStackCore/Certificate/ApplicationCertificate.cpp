/*
   Copyright 2018 Kai Huebl (kai@huebl-sgh.de)

   Lizenziert gemäß Apache Licence Version 2.0 (die „Lizenz“); Nutzung dieser
   Datei nur in Übereinstimmung mit der Lizenz erlaubt.
   Eine Kopie der Lizenz erhalten Sie auf http://www.apache.org/licenses/LICENSE-2.0.

   Sofern nicht gemäß geltendem Recht vorgeschrieben oder schriftlich vereinbart,
   erfolgt die Bereitstellung der im Rahmen der Lizenz verbreiteten Software OHNE
   GEWÄHR ODER VORBEHALTE – ganz gleich, ob ausdrücklich oder stillschweigend.

   ApplicationCertificatermationen über die jeweiligen Bedingungen für Genehmigungen und Einschränkungen
   im Rahmen der Lizenz finden Sie in der Lizenz.

   Autor: Kai Huebl (kai@huebl-sgh.de)
 */

#include <OpcUaStackCore/Certificate/ApplicationCertificate.h>

namespace OpcUaStackCore
{

	ApplicationCertificate::ApplicationCertificate(void)
	: enable_(false)
	, certificateTrustListLocation_("")
	, certificateRejectListLocation_("")
	, certificateRevocationListLocation_("")
	, issuersCertificatesLocation_("")
	, issuersRevocationListLocation_("")

	, serverCertificateFile_("")
	, privateKeyFile_("")

	, commonName_("")
	, domainComponent_("")
	, organization_("")
	, organizationUnit_("")
	, locality_("")
	, state_("")
	, country_("")
	, yearsValidFor_(5)
	, keyLength_(2048)
	, certificateType_("RsaSha256")
	, ipAddress_()
	, dnsName_()
	{
	}

	ApplicationCertificate::~ApplicationCertificate(void)
	{
	}

	bool
	ApplicationCertificate::init(void)
	{
		// FIXME: todo
		return true;
	}

	bool
	ApplicationCertificate::cleanup(void)
	{
		// FIXME: todo
		return true;
	}

	void
	ApplicationCertificate::enable(bool enable)
	{
		enable_ = enable;
	}

	bool
	ApplicationCertificate::enable(void)
	{
		return enable_;
	}

	void
	ApplicationCertificate::certificateTrustListLocation(const std::string& certificateTrustListLocation)
	{
		certificateTrustListLocation_ = certificateTrustListLocation;
	}

	std::string&
	ApplicationCertificate::certificateTrustListLocation(void)
	{
		return certificateTrustListLocation_;
	}

	void
	ApplicationCertificate::certificateRejectListLocation(const std::string& certificateRejectListLocation)
	{
		certificateRejectListLocation_ = certificateRejectListLocation;
	}

	std::string&
	ApplicationCertificate::certificateRejectListLocation(void)
	{
		return certificateRejectListLocation_;
	}

	void
	ApplicationCertificate::certificateRevocationListLocation(const std::string& certificateRevocationListLocation)
	{
		certificateRevocationListLocation_ = certificateRevocationListLocation;
	}

	std::string&
	ApplicationCertificate::certificateRevocationListLocation(void)
	{
		return certificateRevocationListLocation_;
	}

	void
	ApplicationCertificate::issuersCertificatesLocation(const std::string& issuersCertificatesLocation)
	{
		issuersCertificatesLocation_ = issuersCertificatesLocation;
	}

	std::string&
	ApplicationCertificate::issuersCertificatesLocation(void)
	{
		return issuersCertificatesLocation_;
	}

	void
	ApplicationCertificate::issuersRevocationListLocation(const std::string& issuersRevocationListLocation)
	{
		issuersRevocationListLocation_ = issuersRevocationListLocation;
	}

	std::string&
	ApplicationCertificate::issuersRevocationListLocation(void)
	{
		return issuersRevocationListLocation_;
	}

	void
	ApplicationCertificate::serverCertificateFile(const std::string& serverCertificateFile)
	{
		serverCertificateFile_ = serverCertificateFile;
	}

	std::string&
	ApplicationCertificate::serverCertificateFile(void)
	{
		return serverCertificateFile_;
	}

	void
	ApplicationCertificate::privateKeyFile(const std::string& privateKeyFile)
	{
		privateKeyFile_ = privateKeyFile;
	}

	std::string&
	ApplicationCertificate::privateKeyFile(void)
	{
		return privateKeyFile_;
	}

	void
	ApplicationCertificate::commonName(const std::string& commonName)
	{
		commonName_ = commonName;
	}

	std::string&
	ApplicationCertificate::commonName(void)
	{
		return commonName_;
	}

	void
	ApplicationCertificate::domainComponent(const std::string& domainComponent)
	{
		domainComponent_ = domainComponent;
	}

	std::string&
	ApplicationCertificate::domainComponent(void)
	{
		return domainComponent_;
	}

	void
	ApplicationCertificate::organization(const std::string& organization)
	{
		organization_ = organization;
	}

	std::string&
	ApplicationCertificate::organization(void)
	{
		return organization_;
	}

	void
	ApplicationCertificate::organizationUnit(const std::string& organizationUnit)
	{
		organizationUnit_ = organizationUnit;
	}

	std::string&
	ApplicationCertificate::organizationUnit(void)
	{
		return organizationUnit_;
	}

	void
	ApplicationCertificate::locality(const std::string& locality)
	{
		locality_ = locality;
	}

	std::string&
	ApplicationCertificate::locality(void)
	{
		return locality_;
	}

	void
	ApplicationCertificate::state(const std::string& state)
	{
		state_ = state;
	}

	std::string&
	ApplicationCertificate::state(void)
	{
		return state_;
	}

	void
	ApplicationCertificate::country(const std::string& country)
	{
		country_ = country;
	}

	std::string&
	ApplicationCertificate::country(void)
	{
		return country_;
	}

	void
	ApplicationCertificate::yearsValidFor(uint32_t yearsValidFor)
	{
		yearsValidFor_ = yearsValidFor;
	}

	uint32_t
	ApplicationCertificate::yearsValidFor(void)
	{
		return yearsValidFor_;
	}

	void
	ApplicationCertificate::keyLength(uint32_t keyLength)
	{
		keyLength_ = keyLength;
	}

	uint32_t
	ApplicationCertificate::keyLength(void)
	{
		return keyLength_;
	}

	void
	ApplicationCertificate::certificateType(const std::string& certificateType)
	{
		certificateType_ = certificateType;
	}

	std::string&
	ApplicationCertificate::certificateType(void)
	{
		return certificateType_;
	}

	std::vector<std::string>&
	ApplicationCertificate::ipAddress(void)
	{
		return ipAddress_;
	}

	std::vector<std::string>&
	ApplicationCertificate::dnsName(void)
	{
		return dnsName_;
	}

}
